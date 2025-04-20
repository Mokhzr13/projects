#include <stdio.h>
#include <math.h>
int even_num(int num)
{
   
    if (num % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int num;
    printf("enter a number to check if it's even or  not: \n");
    scanf("%d", &num);
    if (even_num(num) == 1)
    {
        printf("%d is an even number", num);
    }
    else
    {
        printf("%d is not an even number", num);
    }
}