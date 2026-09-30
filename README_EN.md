# Number Guessing Game

A simple **Number Guessing Game** written in C++. The player must guess a secret number between **1 and 100** with a maximum of **5 attempts**.

## Features

* Generates a random secret number.
* Allows a maximum of 5 attempts.
* Provides hints when the guess is too low or too high.
* Validates input to ensure it is between 1 and 100.
* Stores and displays the guessing history.
* Displays the final game status: win or fail.
* Allows the player to play again.

## How to Run

Make sure a C++ compiler such as **G++** is installed.

### Compile

Linux/macOS:
```bash
g++ main.cpp -o tebak-angka.out
```
Windows:
```bash
g++ main.cpp -o tebak-angka.exe
```

### Run

Linux/macOS:

```bash
./number-guessing-game
```

Windows:

```bash
number-guessing-game.exe
```

## How to Play

1. The program generates a secret number between 1 and 100.
2. Enter your guess when prompted.
3. The program provides a hint:

   * **Too low** if the guess is smaller than the secret number.
   * **Too high** if the guess is larger than the secret number.
4. A valid guess counts as one attempt.
5. The player has a maximum of **5 attempts**.
6. After the game ends, the guessing history is displayed.
7. Enter `Y` to play again or `N` to exit.

## Program Structure

The program consists of several main parts:

* `tampilkanRiwayat()`
  Displays all guesses made by the player.

* `mulaiGame()`
  Runs one game session, including input handling, validation, hints, and win checking.

* `main()`
  Runs the main program and handles the replay feature.

## Technology

* **Language:** C++
* **Libraries:** `<iostream>`, `<cstdlib>`, `<ctime>`

## License

This project was created for learning and practicing C++ programming.
