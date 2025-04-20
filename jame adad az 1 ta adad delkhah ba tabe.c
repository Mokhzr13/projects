#include <stdio.h>
int function(int);
int main()
{
    int x;
    scanf("%d", &x);
    int sum = function(x);
    printf("%d", sum);
    return 0;
}
int function(int x)
{
    int sum=0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}