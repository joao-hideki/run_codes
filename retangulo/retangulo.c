#include <stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y)
{
    if (x >= x0 && x <= x1 && y >= y0 && y <= y1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x0 = 0, y0 = 0, x1 = 0, y1 = 0, x = 0, y = 0;
    scanf("%d %d %d %d %d %d", &x0, &y0, &x1, &y1, &x, &y);
    if (dentro_ret (x0, y0, x1, y1, x, y)) {
        printf("INTERNO");
    }
     else {
        printf("EXTERNO");
    }
    return 0;
}
