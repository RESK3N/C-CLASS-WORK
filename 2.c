//Program in c to check if a number is prime or composite
#include <stdio.h>
int main()
{
    int i,n,f=0; //Variable declaration and initialisation
    printf("ENTER A NUMBER >  ");
    scanf(" %d",&n);
    for(i=1;i<=n;i++) //loop
    {
        if(n%i==0)
        {
            f++;
        }
    }
    if(f==2)
    {
        printf("\nTHE NUMBER IS PRIME ");
    }
    else if(n==1)
    {
        printf("\nTHE NUMBER '1' IS NEITHER PRIME NOR COMPOSITE ");
    }
    else
    {
        printf("\nTHE NUMBER IS COMPOSITE");
    }
}
