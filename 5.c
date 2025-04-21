#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    if (r1 == r2 || c1 == c2)
    {
        printf("yes");
    }
    else if (r1 != r2 && c1 != c2)
    {
        printf("no");
    }
}