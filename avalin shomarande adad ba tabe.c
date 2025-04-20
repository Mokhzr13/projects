#include <stdio.h>
#include <math.h>
int divisibility_num(int num)
{
    int k;
    if (num <= 1)
    {
        return 0;
    }
    for (k = 2; k <= num; k++)
        if (num % k == 0)
            return k;
    return num;
}
int main()
{
    int num;
    printf("please enter a number to calculate the first counter for it: \n");
    scanf("%d", &num);
    int first_divisor = divisibility_num(num);

    if (num == first_divisor)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("the first counter for %d is %d", num, first_divisor);
        return 0;
    }
}