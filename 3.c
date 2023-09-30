//Program in C to print 5 passes of 1 to 5
#include <stdio.h>
int main()
{
    int i,j;//Variable declaration
    for(i=1;i<=5;i++) //Outer loop
    {
        printf("\npass %d- ",i);
        for(j=1;j<=5;j++) //Inner loop
        {
            printf("%d",j);
        }
    }
}