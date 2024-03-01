void user_screen_preference()
{
    get_console_width_height();
    printInMiddle("If you want to change the screen size, do it now changing it later might break the game!","supermid",2);
    printInMiddle("PRESS ANY KEY TO CONTINUE","supermid",0);
    _getch();
    mainMenu();
}