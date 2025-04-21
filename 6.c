#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    int length = strlen(string);

    for (int i = 0; i < length / 2; i++)
    {
        char temp = string[i];
        string[i] = string[length - 1 - i];
        string[length - 1 - i] = temp;
    }
    printf("%s", string);
    return 0;
}