#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    sum = sum / n;
    printf("%.2f", sum);
    return 0;
}