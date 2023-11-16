//write a Program in C to store the  information of 10 students
#include <stdio.h>
int main()
{
    int i;
    struct stu
    {
        int roll[10];
        float marks[10];
    }class;
    for (i=0;i<10;i++)
    {
        printf("\nEnter roll of student %d >> ",i+1);
       scanf("%d",&class.roll[i]);
       printf("\nEnter marks of student %d >> ",i+1);
       scanf("%f",&class.marks[i]);
    }
    for (i=0;i<10;i++)
    {
        printf("\nRoll of student %d  is %d ",i+1,class.roll[i]);
        printf("\nMarks of student %d is %f ",i+1,class.marks[i]);
    }
}