void locateFood(int *x, int *y)
{
    srand(time(NULL));
    *x = rand() % width;
    *y = rand() % height;
    if (*x < width && *y < height && *x > 0 && *y > 0)
    {
        return;
    }
    else
    {
        locateFood(x,y);
    }
}