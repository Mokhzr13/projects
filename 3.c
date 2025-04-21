#include <stdio.h>
int mostfrequent(int num[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int natije = mostfrequent(num, n);
    printf("%d", natije);
}
int mostfrequent(int num[], int n)
{
    int mostfrequent, maxcount = 0, i, j;
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if (num[i] == num[j])
            {
                count++;
            }
        }
        if (count > maxcount)
        {
            maxcount = count;
            mostfrequent = num[i];
        }
        else if (count == maxcount && num[i] < mostfrequent)
        {
            mostfrequent = num[i];
        }
    }

    return mostfrequent;
}