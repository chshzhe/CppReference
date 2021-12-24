#ifndef game_h
#define game_h

class game
{
private:
    int cell[6][6];          // Record the current status
    int score = 0;           // Current score
    int movetimes = 0;       // Number of moves
    int best_score = 0;      // Best score in history
    double FourRate = 0.2;   // Probability of generating number 4. Must be a real number in 0~1.
    int init_generate = 2;   // Number of digits generated during initialization
    bool randomGenerate();   // Randomly generated number
    int generateTwoorFour(); // Randomly generate 2 or 4 controlled by FourRate

public:
    void init();                              // Initialize game
    bool move(int arr[6][6], char direction); // Merge and move blocks
    void show();                              // Print output to screen
    void welcome();                           // Print welcome interface
    void gameover();                          // Game Over
    void run();                               // Start game
    void start();                             // Game main process
    void Game_Exit();                         // Exit game
    char getDirection();                      // Get valid input
    bool test();                              // Verify effective movement
};

#endif