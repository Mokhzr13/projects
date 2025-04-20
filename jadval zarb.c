#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
             int product = (i+1) * (j);
             printf("%d\t", product);
        }
        printf("\n");
    }
    return 0;
}