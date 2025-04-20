#include <stdio.h>

int main()
{
    char name[100];   
    char *ptr = name; 
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); 


    int length = 0;
    while (*ptr != '\0')
    {
        length++; 
        ptr++;   
    }
    length = length - 1;
    printf("Length of your name is: %d\n", length);
    return 0;
}