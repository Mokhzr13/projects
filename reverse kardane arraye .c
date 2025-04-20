#include <stdio.h>
int main()
{
    int size;
    printf("please enter the size of array: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the elements of array: ");
        scanf("%d", &array[i]);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        printf(" %d ", array[i]);
    }
}