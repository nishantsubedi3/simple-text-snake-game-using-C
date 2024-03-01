void startGame(float timeDelay)
{
    int w = 0, h = 0, x, y, k = 1, score = 0;
    buffer = (char *)malloc(4);
    char temp[100];
    memset(buffer, 0, 4);
    buffer[0] = '-';
    buffer[1] = '>';
    char input = 's';
    locateFood(&x, &y);
    do
    {
        clrscr();
        if (_kbhit())
        {
            input = _getch();
            if (input == 'q')
            {
                break;
            }
        }
        checkInput(input, &w, &h);
        if (w == width || h == height || w == -1 || h == -1)
        {
            break;
        }
        if (w + (k + 1) != x || h != y)
        {
            set_cursor_position(x, y);
            printf("o");
        }
        else
        {
            set_cursor_position(x - 1, y);
            printf("+10");
            locateFood(&x, &y);
            score += 10;
            k++;
            setNewBuffer(k);
        }
        set_cursor_position(w, h);
        for(int i = 0; i < k + 1; i++)
        {
            printf("%c",buffer[i]);
        }
        set_cursor_position(0,0);
        printf("Current score: %d", score);
        stop(timeDelay);
    } while (input != 'q');
    sprintf(temp, "Game Over! Your score is %d", score);
    printInMiddle(temp, "supermid", 2);
    printInMiddle("Press any key to continue..", "supermid", 0);
    _getch();
    main();
}