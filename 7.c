#include <stdio.h>
#include <string.h>
int main()
{
    char string1[100];
    char string2[100];
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';
    int length1 = strlen(string1);
    int length2 = strlen(string2);
    if(length1==0 || length2==0){
        printf("0");
        return 0;
    }
    int found = 0;
    for (int i = 0; i <= length1 - length2; i++)
    {
        int j;
        for (j = 0; j < length2; j++)
        {
            if (string1[i + j] != string2[j])
            {
                break;
            }
        }
        if (j == length2)
        {
            found = 1;
        }
        if (found)
        {
            printf("%d", i + 1);
            break;
        }
    }
        if(found==0)
        {
            printf("-1");
        }
    return 0;
}