//Default main function
void main();

//Asking user to fullscreen or not
void user_screen_preference();

//Game Main menu
void mainMenu();

//Message on the top and bottom of screen
void headAndFoot();

//prints any text in middle
void printInMiddle(char *, char *, int);

//prints '\n' n times
void nextLine(int);

//sleeps the console for n seconds
void stop(float);

//detects the OS
int oslist();

//Clears the console
void clrscr();

//Detects the console's width and height
void get_console_width_height();

//Sets the cursor position
void set_cursor_position(int, int);

//Starts the game
void startGame(float);

//checks user input for w,a,s,d
void checkInput(char,int *, int *);

//spawns foods
void locateFood(int *, int *);

//sets new buffer
void setNewBuffer(int);