#include <stdio.h>
#include <string.h>
#define maxstudents 100
char names[maxstudents][50];
int scores[maxstudents];
int count = 0;
int studentIDs[maxstudents];
void Addstudent();
void Displaystudents();
void Calculatingaverage();
void Findstudent();
int main()
{
    int choice;
    do
    {
        printf("----Menu----\n");
        printf("1.Add student\n");
        printf("2.Display Students\n");
        printf("3.Calculate Average\n");
        printf("4.Find Student\n");
        printf("5.Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            Addstudent();
            break;
        case 2:
            Displaystudents();
            break;
        case 3:
            Calculatingaverage();
            break;
        case 4:
            Findstudent();
            break;
        case 5:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);
    
    return 0;
}
void Addstudent()
{
    char name[100];
    printf("Enter student's name: ");
    scanf("%s", names[count]);
    printf("Enter student's ID number: ");
    scanf("%d", &studentIDs[count]);
    printf("Enter student's Scores: ");
    scanf("%d", &scores[count]);
    count++;
}
void Displaystudents()
{
    if (count == 0)
    {
        return;
    }
    printf("---Students List---\n");
    for (int i = 0; i < count; i++)
    {
        printf("name: %s ID_Number: %d Score: %d \n", names[i], studentIDs[i], scores[i]);
    }
}
void Calculatingaverage()
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += scores[i];
    }
    float average = sum / count;
    printf("Average score of all students is equal to %.2f:\n", average);
}
void Findstudent()
{
    int ID;
    printf("please enter the student ID: ");
    scanf("%d", &ID);
    for (int i = 0; i < count; i++)
    {
        if (ID == studentIDs[i])
        {
            printf("name: %s ID_Number: %d Score: %d \n", names[i], studentIDs[i], scores[i]);
        }
    }
}
//Mohammad Reza Moktarian 4311140