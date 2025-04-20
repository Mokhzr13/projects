#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int countc = 0, countm = 0;
    char string[100];
    scanf("%s", &string);
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        if (islower(string[i]))
        {
            countm++;
        }
        else
        {
            countc++;
        }
    }
    printf("Minimal : %d , Capital : %d", countm, countc);
}
if(str[i] >= 'A' && str[i] <= "Z") {
 str[i] + "Z" - "A"
}
if(str[i]>='A' || str[i<='Z'])