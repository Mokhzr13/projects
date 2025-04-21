#include <stdio.h>
int taghsim(int n, int x)
{
    if (n == 0)
        return 0;
    return 1 + taghsim(n - x, x);
}
int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    if (x == 0)
    {
        printf("invalid");
    }
    else
    {
        printf("%d", taghsim(n, x));
    }
}