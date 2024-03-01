int oslist()
{
#ifdef _WIN32
    return 1;
#elif __APPLE__
    return 2;
#elif __linux__
    return 3;
#elif TARGET_OS_MAC
    return 4;
#else
    return 5;
#endif
}

void clrscr()
{
    if (oslist() == 1)
    {
        system("cls");
    }
    else if (oslist() == 3)
    {
        system("clear");
    }
}

void get_console_width_height()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE console_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    if (GetConsoleScreenBufferInfo(console_handle, &csbi))
    {
        width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    }
    if (GetConsoleScreenBufferInfo(console_handle, &csbi))
    {
        height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    }
}

void set_cursor_position(int x, int y)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {x, y};
    SetConsoleCursorPosition(hConsole, pos);
}