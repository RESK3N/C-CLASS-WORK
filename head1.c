//program in C to find the sum of n numbers using head recursion
#include <stdio.h>
int sum=0,n;
int hd(int num)
{
    hd(n-1);

    if (num!=0)
    {
        sum=sum+num;
    }else
    {
        printf("sum of n numbers is >> %d \n",sum);
    }
}
int main()
{
    printf("enter a positive integer >> ");
    scanf("%d",&n);
    hd(n);
}