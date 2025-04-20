#include <stdio.h>
int main()
{
    int num_students, i;
    float sum = 0, average;
    printf("enter the number of students: ");
    scanf("%d", &num_students);
    float scores[num_students];
    for (i = 0; i < num_students; i++)
    {
        printf("enter the scores for each student %d: ", i + 1);
        scanf("%f", &scores[i]);
        sum += scores[i];
    }
    average = sum / num_students;
    printf("the average of students' scores is eqaul to : %.2f", average);
}