/*The Class header file for main.cpp*/
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

class Board
{//the class tracks the game and the winner
    char positionsSelected[16];
    char winner;
    
public:
    /*This is another way of doing methods in classes. 
    Instead of listing the methods in the class, 
    Then defining them afterwards, the methods are 
    defined within the class definition. 
    The downside of this method is: it is not immediately
    clear what methods are in the class. 
    */
    Board()
    {//sets the board to blanks and the winner to 'z'
        //std::cout<<"Creating a board\n";
        winner = 'z'; //not determined or tie
        
        for(int i = 0; i < 16; i++)
        {
            positionsSelected[i] = '_';
        }
    }
    
    
    char* getPositions(void)
    {//return all the positions on the board
        return positionsSelected;
    }
    
    /* TODO: assign the user character to the selected location
            if the space already taken, return -1, otherwise return 0*/
    int setPosition(int gridNumber, char user)
    {//set a given position to x or o
        
    }
    
    /* TODO: check if there is any winner in the row direction 
        retrun the character 'x' or 'o' if there is a winner,
        otherwise return character 'z'*/
    char checkRows()
    {
        
    }
    
    /* TODO: check if there is any winner in the column direction 
        retrun the character 'x' or 'o' if there is a winner,
        otherwise return character 'z'*/
    char checkColumns()
    {

    }
    
    /* TODO: check if there is any winner in the diagonal direction 
        retrun the character 'x' or 'o' if there is a winner,
        otherwise return character 'z'*/
    char checkDiagonals()
    {
        
    }

    char determineWinner()
    {//if 4 in a row, then there is a winner
        char winner = 'z';
        winner =  checkRows();
        if(winner == 'z')
            winner = checkColumns();
        if(winner =='z')
            winner = checkDiagonals();
        return winner;
    }
    
};