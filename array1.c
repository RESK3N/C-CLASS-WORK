//Program in C to to traverse an array through user input
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter number of elements >> ");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf ("Enter element %d >> ",i);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);

    }
}