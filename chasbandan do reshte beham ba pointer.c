#include <stdio.h>
#include <string.h>
void concatenate(char *dest, char *src)
{

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}

int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    if (str1[strlen(str1) - 1] == '\n')
    {
        str1[strlen(str1) - 1] = '\0';
    }
    if (str2[strlen(str2) - 1] == '\n')
    {
        str2[strlen(str2) - 1] = '\0';
    }

    concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}