#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <cstring>
#include "game.h"
using namespace std;

#define DOWN_MOVE '2'
#define LEFT_MOVE '4'
#define RIGHT_MOVE '6'
#define UP_MOVE '8'
#define EXIT_KEY 'E'
#define AGAIN_KEY 'T'
// Define the controlling keys

void game::run() // Start game
{
    game::welcome();
}
void game::welcome() // Print welcome interface
{
    system("cls");
    printf(" __          __ ______  _       _____  ____   __  __  ______ \n");
    printf(" \\ \\        / /|  ____|| |     / ____|/ __ \\ |  \\/  ||  ____|\n");
    printf("  \\ \\  /\\  / / | |__   | |    | |    | |  | || \\  / || |__   \n");
    printf("   \\ \\/  \\/ /  |  __|  | |    | |    | |  | || |\\/| ||  __|  \n");
    printf("    \\  /\\  /   | |____ | |____| |____| |__| || |  | || |____ \n");
    printf("     \\/  \\/    |______||______|\\_____|\\____/ |_|  |_||______|\n");
    printf("  ___    ___   _  _    ___     _____  ______  __  __  ______ \n");
    printf(" |__ \\  / _ \\ | || |  / _ \\   / ____||  ____||  \\/  ||  ____|\n");
    printf("    ) || | | || || |_| (_) | | |  __ | |__   | \\  / || |__   \n");
    printf("   / / | | | ||__   _|> _ <  | | |_ ||  __|  | |\\/| ||  __|  \n");
    printf("  / /_ | |_| |   | | | (_) | | |__| || |____ | |  | || |____ \n");
    printf(" |____| \\___/    |_|  \\___/   \\_____||______||_|  |_||______|\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Want to start a new game?(Y/N)\n");

    char choice;
    string str;
    bool flag = false;
    while (!flag)
    {
        getline(cin, str);
        choice = str[0];
        if (toupper(choice) == 'Y')
        {
            game::init();
            flag = true;
        }
        if (toupper(choice) == 'N')
        {
            game::Game_Exit();
            flag = true;
        }
        if (!flag)
            printf("Invalid input! Please try again!\n");
    }
}
void game::Game_Exit() // Exit game
{
    system("cls");
    printf("Thank you for your play! Bye~\n\n\n\n");
    system("pause");
}
void game::init() // Initialize game
{
    movetimes = 0;
    score = 0;
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++)
            cell[i][j] = 0;
    int num = init_generate;
    while (num)
    {
        if (game::randomGenerate())
            num--;
    }
    game::start();
}
bool game::randomGenerate() // Randomly generate number
/***
* Randomly generate number in random positions. 
* Returns false if the location is occupied and true if it is generated normally.
***/
{
    srand((unsigned)time(NULL));
    int row = (rand() % (4)) + 1, column = (rand() % (4)) + 1;
    if (cell[row][column] == 0)
    {
        cell[row][column] = game::generateTwoorFour();
        return true;
    }
    else
        return false;
}
int game::generateTwoorFour() // Randomly generate 2 or 4 controlled by FourRate
{
    srand((unsigned)time(NULL));
    if (((rand() % 100) + 1) / 100.0 > FourRate)
        return 2;
    else
        return 4;
}
void game::show() // Print output to screen
{
    printf("+-----------------------------------------------+\n");
    for (int i = 1; i <= 4; i++)
    {
        printf("|           |           |           |           |\n");
        printf("|           |           |           |           |\n");
        for (int j = 1; j <= 4; j++)
        {
            if (cell[i][j])
                printf("|   %-5d   ", cell[i][j]);
            else
                printf("|           ");
        }
        printf("|\n");
        printf("|           |           |           |           |\n");
        printf("|           |           |           |           |\n");
        if (i == 4)
            printf("+-----------------------------------------------+\n");
        else
            printf("|-----------|-----------|-----------|-----------|\n");
    }
    if (best_score < score)
        best_score = score;
    printf("\n\nYour Score: %d\nBest Score: %d\nMove Times: %d\n\n\n", score, best_score, movetimes);
}
char game::getDirection() // Get valid input
{
    char direction;
    printf("Press 2/4/6/8 to MOVE the tiles. Press E to EXIT. Press T to try AGIAN.\nPlease give your dicision!\n");
    while (true)
    {
        string str;
        getline(cin, str);
        direction = toupper(str[0]);
        if (direction == DOWN_MOVE || direction == LEFT_MOVE || direction == RIGHT_MOVE || direction == UP_MOVE || direction == EXIT_KEY || direction == AGAIN_KEY)
            return direction;
        printf("Invalid input! Please try again!\n");
    }
}
bool game::move(int arr[6][6], char direction) // Merge and move blocks
/***
* For the merging and moving of blocks, the return value is whether to move normally.
* Return true for normal movement and false for invalid movement.
***/
{
    bool flag = false; // Flag bit for legal movement
    switch (direction)
    {
    case LEFT_MOVE: // Left move
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= 3; j++) // Merge same numbers
                if (arr[i][j] != 0)
                {
                    for (int k = j + 1; k <= 4; k++)
                        if (arr[i][k] != 0)
                        {
                            if (arr[i][j] == arr[i][k])
                            {
                                arr[i][j] *= 2;
                                arr[i][k] = 0;
                                score += arr[i][j];
                                flag = true;
                            }
                            k = 5;
                        }
                }

            int pos = 1; // Move numbers
            for (int j = 1; j <= 4; j++)
                if (arr[i][j] != 0)
                {
                    arr[i][pos] = arr[i][j];
                    if (j != pos)
                    {
                        arr[i][j] = 0;
                        flag = true;
                    }
                    pos++;
                }
        }
        break;
    case RIGHT_MOVE: // Right move
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= 3; j++) // Merge same numbers
                if (arr[i][5 - j] != 0)
                {
                    for (int k = j + 1; k <= 4; k++)
                        if (arr[i][5 - k] != 0)
                        {
                            if (arr[i][5 - j] == arr[i][5 - k])
                            {
                                arr[i][5 - j] *= 2;
                                arr[i][5 - k] = 0;
                                score += arr[i][5 - j];
                                flag = true;
                            }
                            k = 5;
                        }
                }
            int pos = 1; // Move numbers
            for (int j = 1; j <= 4; j++)
                if (arr[i][5 - j] != 0)
                {
                    arr[i][5 - pos] = arr[i][5 - j];
                    if (j != pos)
                    {
                        arr[i][5 - j] = 0;
                        flag = true;
                    }
                    pos++;
                }
        }
        break;
    case UP_MOVE: // Up move
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= 3; j++) // Merge same numbers
                if (arr[j][i] != 0)
                {
                    for (int k = j + 1; k <= 4; k++)
                        if (arr[k][i] != 0)
                        {
                            if (arr[j][i] == arr[k][i])
                            {
                                arr[j][i] *= 2;
                                arr[k][i] = 0;
                                score += arr[j][i];
                                flag = true;
                            }
                            k = 5;
                        }
                }
            int pos = 1; // Move numbers
            for (int j = 1; j <= 4; j++)
                if (arr[j][i] != 0)
                {
                    arr[pos][i] = arr[j][i];
                    if (j != pos)
                    {
                        arr[j][i] = 0;
                        flag = true;
                    }
                    pos++;
                }
        }
        break;
    case DOWN_MOVE: // Down move
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= 3; j++) // Merge same numbers
                if (arr[5 - j][i] != 0)
                {
                    for (int k = j + 1; k <= 4; k++)
                        if (arr[5 - k][i] != 0)
                        {
                            if (arr[5 - j][i] == arr[5 - k][i])
                            {
                                arr[5 - j][i] *= 2;
                                arr[5 - k][i] = 0;
                                score += arr[5 - j][i];

                                flag = true;
                            }
                            k = 5;
                        }
                }
            int pos = 1; // Move numbers
            for (int j = 1; j <= 4; j++)
                if (arr[5 - j][i] != 0)
                {
                    arr[5 - pos][i] = arr[5 - j][i];
                    if (j != pos)
                    {
                        arr[5 - j][i] = 0;
                        flag = true;
                    }
                    pos++;
                }
        }
        break;
    default:
        break;
    }
    return flag;
}
bool game::test() // Verify effective movement
/***
* Check whether all possible movements at this stage are valid. 
* If only one is valid, return true to continue the game. 
* If there is no valid movement mode, return false to end the game.
***/
{
    int celltest[6][6];
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++)
            celltest[i][j] = cell[i][j];
    if (move(celltest, RIGHT_MOVE))
        return true;
    if (move(celltest, LEFT_MOVE))
        return true;
    if (move(celltest, UP_MOVE))
        return true;
    if (move(celltest, DOWN_MOVE))
        return true;
    return false;
}
void game::start() // Game main process
{
    char direction;
    bool flag;
    while (true)
    {
        system("cls");
        game::show();
        if (!game::test())
            break;
        bool flag = false;
        while (!flag) // Verify effective movement
        {
            direction = game::getDirection(); // Get valid input
            if (direction == EXIT_KEY)        // Exception handling
                break;
            if (direction == AGAIN_KEY) // Exception handling
                break;
            if (move(cell, direction))
                flag = true;
            else
                printf("Oops! You cannot move in that direction.\nPlease try again!\n");
        }
        if (direction == EXIT_KEY) // Exception handling
            break;
        if (direction == AGAIN_KEY) // Exception handling
            break;
        movetimes++;
        while (!game::randomGenerate()) // Generate a new number
            ;
    }
    if (direction == EXIT_KEY) // Exception handling
        game::Game_Exit();
    if (direction == AGAIN_KEY) // Exception handling
        game::init();
    if (!game::test()) // Exception handling
        game::gameover();
}

void game::gameover() // Game Over
{
    printf("Oops! Failure!\nDo you want to try again?(Y/N)\n");
    string str;
    bool flag = false;
    while (!flag)
    {
        getline(cin, str);
        char choice = toupper(str[0]);
        if (choice == 'Y')
        {
            game::init();
            flag = true;
        }
        if (choice == 'N')
        {
            game::Game_Exit();
            flag = true;
        }
        if (!flag)
            printf("Invalid input! Please try again!\n");
    }
}