#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int table[n][n], i, j;
    for (i = 0; i <= n; i++)
        for (j = 0; j < n; j++)
            table[i][j] = (i + 1) * (j + 1);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", table[i][j]);
        printf("\n");
    }
    getchar();
    getchar();
    return 0;
}
