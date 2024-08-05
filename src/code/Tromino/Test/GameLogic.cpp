#include "GameLogic.h"
#include "ShapeDefinitions.h"
#include "Display.h"

extern LiquidCrystal lcd;
extern boolean matrix[16][4];
extern int score, highScore;

// Initialize the LCD display
void initializeDisplay() {
  lcd.begin(16, 2);
  lcd.createChar(0, ctop);
  lcd.createChar(1, cbottom);
  lcd.createChar(2, cfull);
}

// Draw the game screen on the LCD
void drawScreen() {
  for (int i = 0; i < 16; i++) {
    lcd.setCursor(i, 0);
    if (matrix[i][0] && matrix[i][1])
      lcd.write(byte(2));
    else if (matrix[i][0])
      lcd.write(byte(0));
    else if (matrix[i][1])
      lcd.write(byte(1));
    else
      lcd.print(' ');
    
    lcd.setCursor(i, 1);
    if (matrix[i][2] && matrix[i][3])
      lcd.write(byte(2));
    else if (matrix[i][2])
      lcd.write(byte(0));
    else if (matrix[i][3])
      lcd.write(byte(1));
    else
      lcd.print(' ');
  }
}

// Display the welcome screen
void showWelcomeScreen() {
  lcd.clear();
  
  // Center-align the "Tromino Game!" text
  String topText = "Tromino Game!";
  int topTextLength = topText.length();
  int startTopPosition = (16 - topTextLength) / 2;
  lcd.setCursor(startTopPosition, 0);
  lcd.print(topText);

  // Center-align the bottom text
  String bottomText = "by Yunus[QC20]";
  int bottomTextLength = bottomText.length();
  int startBottomPosition = (16 - bottomTextLength) / 2;
  lcd.setCursor(startBottomPosition, 1);
  lcd.print(bottomText);

  delay(2000);
}

// Display the high score screen
void showHighScoreScreen() {
  lcd.clear();

  // Center-align the "Highscore:" text
  String highscoreText = "Highscore:";
  int highscoreTextLength = highscoreText.length();
  int startHighscorePosition = (16 - highscoreTextLength) / 2;
  lcd.setCursor(startHighscorePosition, 0);
  lcd.print(highscoreText);

  // Convert high score to string and center-align it
  String highScoreStr = String(highScore);
  int highScoreStrLength = highScoreStr.length();
  int startHighScorePosition = (16 - highScoreStrLength) / 2;
  lcd.setCursor(startHighScorePosition, 1);
  lcd.print(highScoreStr);

  delay(2000);
}

// Display the game over screen
void showGameOverScreen() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Game Over");
  lcd.setCursor(0, 1);
  lcd.print("Score:");
  lcd.print(score);
}