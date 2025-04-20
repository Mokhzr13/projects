#include <stdio.h>

int max3(int a, int b, int c);

int main()
{
    int a, b, c, mx;
    printf("please enter three numbers to show u the biggest pne beetwen them : \n");
    scanf("%d %d %d", &a, &b, &c);
    mx = max3(a, b, c);
    printf("max(%d %d %d) = %d \n", a, b, c, mx);
    return 0;
}
int max3(int a, int b, int c)
{
    if (a < b)
        a = b;
    if (a < c)
        a = c;
    return a;
}