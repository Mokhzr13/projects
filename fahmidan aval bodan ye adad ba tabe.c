#include <stdio.h>
#include <math.h>
int is_prime(int num)
{
    if (num <= 1)
        return 0;
    for (int k = 2; k * k <= num; k++)
        if (num % k == 0)
            return 0;
    return 1;
}
int main()
{
    int num;
    printf("enter a number to check if its prime or not : \n");
    scanf("%d", &num);
    if (is_prime(num) == 0)
    {
        printf("%d is not prime ", num);
    }
    else
    {
        printf("%d is prime", num);
    }
}