/*
 * 16-05-2023
 * Example of Abstract class
 */
abstract class GameConsole {
    int score = 10;

    void displayScore() {
        System.out.println("The displayScore method." + score);
    }

    // abstract void computeScore();

    // abstract void playGame();
}

class Badminton extends GameConsole {
    void playGame() {
        System.out.println("Starting the Badminton Game...");
    }

    void displayScore() {
        System.out.println(" displayScore method." + score);
    }

    void computeScore() {
        System.out.println("Implementing the abstract method of the Gameconsole class.");
    }
}

class GameAbs {
    public static void main(String args[]) {
        Badminton obj1 = new Badminton();
        obj1.playGame();
        obj1.computeScore();
        obj1.displayScore();
    }
}