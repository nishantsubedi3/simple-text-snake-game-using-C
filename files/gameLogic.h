void checkInput(char input, int *w, int *h)
{
    if (input == 'q' || input == 'w' || input == 'a' || input == 's' || input == 'd' || input == 75 || input == 72 || input == 80 || input == 77)
    {
        input_cpy = input;
    }
    if (input != 'q' && input != 'w' && input != 'a' && input != 's' && input != 'd' && input != 75 && input != 72 && input != 80 && input != 77)
    {
        input = input_cpy;
    }
    if (input == 'd' || input == 77)
    {
        *w = *w + 1;
    }
    if (input == 's' || input == 80)
    {
        *h = *h + 1;
    }
    if (input == 'a' || input == 75)
    {
        *w = *w - 1;
    }
    if (input == 'w' || input == 72)
    {
        *h = *h - 1;
    }
}

void setNewBuffer(int k)
{
    buffer = (char *)realloc(buffer, k + 1);
    for (int i = 0; i < k; i++)
    {
        buffer[i] = '-';
    }
    buffer[k] = '>';
}