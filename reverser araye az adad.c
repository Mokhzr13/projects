#include <Stdio.h>
#include <conio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n], y[n], i, j;
    for (i = 0; i < n; i++)
    {
        printf("enter number %d:", i + 1);
        scanf("%d", &x[i]);
    }
    j = 0;
    printf("number in reverse:\n");
    for (i = n - 1; i >= 0; i--)
    {
        y[j] = x[i];
        printf("%   d", y[j]);
        j++;
    }
    printf("\n press a key to continue... ");
    getchar();
    return 0;
}
