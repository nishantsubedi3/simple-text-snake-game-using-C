void mainMenu()
{
    get_console_width_height();
    fflush(stdin);
    headAndFoot();
    nextLine(2);
    printInMiddle("Please choose your difficuilty!", "supermidnodeco", 8);
    nextLine(1);
    printInMiddle("1. Easy", "supermidnodeco", 6);
    nextLine(1);
    printInMiddle("2. Medium", "supermidnodeco", 4);
    nextLine(1);
    printInMiddle("3. Hard", "supermidnodeco", 2);
    nextLine(1);
    printInMiddle("4. Extreme", "supermidnodeco", 0);
    nextLine(1);
    printInMiddle("Enter your choice: ", "input", 0);
    scanf("%d", &difficuilty);
    switch (difficuilty)
        {
        case 1:
        {
            headAndFoot();
            printInMiddle("YOU CHOOSED EASY DIFFICUILTY!", "supermid", 2);
            printInMiddle("SATRTING GAME...", "supermid", 0);
            stop(0.5);
            startGame(0.08);
            break;
        }
        case 2:
        {
            headAndFoot();
            printInMiddle("YOU CHOOSED MEDIUM DIFFICUILTY!", "supermid", 2);
            printInMiddle("SATRTING GAME...", "supermid", 0);
            stop(0.5);
            startGame(0.05);
            break;
        }
        case 3:
        {
            headAndFoot();
            printInMiddle("YOU CHOOSED HARD DIFFICUILTY!", "supermid", 2);
            printInMiddle("SATRTING GAME...", "supermid", 0);
            stop(0.5);
            startGame(0.04);
            break;
        }
        case 4:
        {
            headAndFoot();
            printInMiddle("YOU CHOOSED EXTREME DIFFICUILTY!", "supermid", 2);
            printInMiddle("SATRTING GAME...", "supermid", 0);
            stop(0.5);
            startGame(0.02);
            break;
        }
        default:
        {
            headAndFoot();
            printInMiddle("Invalid input!", "supermid", 2);
            printInMiddle("Press any key to continue..", "supermid", 0);
            _getch();
            mainMenu();
            break;
        }
        }
}