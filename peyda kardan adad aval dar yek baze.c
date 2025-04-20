#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = x; i <= y; i++)
    {
        if (i <= 1)
        {
            continue;
        }
        int count = 0;
        for (int j = 2; j*j <= i; j++)
        {

            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}