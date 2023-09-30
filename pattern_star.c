//Program in C to print 5 rows and 10 columns of *
#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=5;i++) //Outer loop
    {
        for(j=1;j<=10;j++) //Inner loop
        {
            printf("* ");
        }
        printf("\n");
    }
}
