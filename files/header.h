#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <Unistd.h>
#include "functionList.h"
#include "globalVariables.h"
#include "systemFunc.h"
void headAndFoot()
{
    clrscr();
    int y = height - 1;
    set_cursor_position(0, y);
    printf("\033[7;3m");
    const char *text = "DEVELOPED BY NISHANT SUBEDI";
    int length = strlen(text);
    int padding = (width - length) / 2;
    printf("%*s%s%*s\n", padding, "", text, padding, "");
    printf("\033[0m");
    set_cursor_position(0, 0);

    printf("\033[7;3m");
    const char *text1 = "WELCOME TO SIMPLE GAME";
    int text_length = strlen(text1);
    int padding1 = (width - text_length) / 2;
    printf("%*s%s%*s\n", padding1, "", text1, padding1, "");
    printf("\033[0m");
    printf("\n");
}

void printInMiddle(char *text, char *type, int k)
{
    if(k == 1 || k < 0 || k > height || k > width)
    {
        k = 0;
    }
    if (strcmp(type, "nodeco") == 0)
    {
        int text_length = strlen(text);
        int padding = (width - text_length) / 2;
        printf("%*s%s%*s\n", padding, "", text, padding, "");
    }

    else if (strcmp(type, "input") == 0)
    {
        int text_length = strlen(text);
        int padding = (width - text_length) / 2;
        printf("%*s%s", padding, "", text);
    }

    else if (strcmp(type, "deco") == 0)
    {
        printf("\033[7;3m");
        int text_length = strlen(text);
        int padding = (width - text_length) / 2;
        printf("%*s%s%*s\n", padding, "", text, padding, "");
        printf("\033[0m");
    }

    else if (strcmp(type, "supermid") == 0)
    {
        set_cursor_position(0, (height / 2) - k);
        printf("\033[7;3m");
        int text_length = strlen(text);
        int padding = (width - text_length) / 2;
        printf("%*s%s%*s\n", padding, "", text, padding, "");
        printf("\033[0m");
    }

    else if (strcmp(type, "supermidnodeco") == 0)
    {
        set_cursor_position(0, (height / 2) - k);
        int text_length = strlen(text);
        int padding = (width - text_length) / 2;
        printf("%*s%s%*s\n", padding, "", text, padding, "");
    }

    else
    {
        text = "Invalid type";
        set_cursor_position(0, height / 2);
        printf("\033[7;3m");
        int text_length = strlen(text);
        int padding = (width - text_length) / 2;
        printf("%*s%s%*s\n", padding, "", text, padding, "");
        printf("\033[0m");
    }
}

void nextLine(int howMany)
{
    for (int i = 0; i < howMany; i++)
    {
        printf("\n");
    }
}

void stop(float sec)
{
    sec = sec * 1000000;
    int msec = (int) sec;
    usleep(msec);
}