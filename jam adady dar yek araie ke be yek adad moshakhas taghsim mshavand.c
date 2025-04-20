#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int signed num[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] % 3 == 0)
        {
            sum += num[i];
        }
    }
    printf("%d",sum);
}