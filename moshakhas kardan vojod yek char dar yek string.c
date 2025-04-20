#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    char n;
    printf("pls enter the string: ");
    scanf("%s", string);
    getchar();
    printf("pls enter the word: ");
    scanf("%c", &n);
    int length = strlen(string);
    int found = 0;

    for (int i = 0; i < length; i++)
    {
        if (string[i] == n)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}