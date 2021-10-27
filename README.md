# C++ Project
## Import Code to VS Code
- Downlaod the repository as zip file
- Unzip to the downloaded file to a desired location
- Open VS Code
- Click on *File* -> *Open Folder* and select the folder you unziped the files.

## Introduction
In this project you will be programming a Tic-Tac-Toe game in C++ with a 4x4 grid. There will be two users, one is assigned to *x* and the other is assigned to *o*. To win the game, the same character should appear four in a row, column, or diagonal.

## Program Setup
### *main.cpp*
This file contain the main function to run the game, it handle calling all the printing function and ask user for input.

### *TicTacToeClasses.cpp*
This file handles rules and logics of the game. You will implement several functions in this file. The board of the tic-tac-toe game is implemented on a 1D character array with a size of 16. 

- *int setPosition(int gridNumber, char user)* This function will be called when the user tries to place marker down on the board.
- *int checkRow()* This function is called to check if there is a winner in the row direction.
- *int checkColumn()* This function is called to check if there is a winner in the column direction.
- *int checkDiagonal()* This function is called to check if there is a winner in the diagonal direction.

### *TicTacToeFunctions.cpp* 
This file contains all the functions for interacting with the user through the command line printout. 