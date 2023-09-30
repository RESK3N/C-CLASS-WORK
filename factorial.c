//Program in C to find the factorial of a number
#include <stdio.h>

int main()
{
    int i,n=1,c; // Variable declaration and initialisation
    printf("ENTER A NUMBER >");
    scanf("%d",&i); //Input
    c=i;
    for(i;i>0;i--) //loop
    {
        n=n*i;
    }
    printf("THE FACTORIAL OF %d is %d",c,n);
}
