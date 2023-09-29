//Program in C to print 5 passes of 1 to 5
#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        printf("\npass %d- ",i);
        for(j=1;j<=5;j++)
        {
            printf("%d",j);
        }
    }
}