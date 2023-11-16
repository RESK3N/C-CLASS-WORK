/*- abhishek travelled 10 ft and 6 inches in 10 minutes
 * and 20 ft 8 inches in 12 minutes ,  Write a program in C to calculate
 * the total distance covered and time taken using structure */
#include<stdio.h>
int main()
{
    struct abi
    {
        int ft,in,t; // ft for feet , in for inches and t for time
    }t1,t2,t3;
    //variable initialisation with values provided
    t1.ft=10;
    t2.ft=20;
    t1.in=6;
    t2.in=8;
    t1.t=10;
    t2.t=12;
    //time
    t3.t=t1.t+t2.t;
    //feet
    t3.ft=t1.ft+t2.ft;
    //inches
    t3.in=t1.in+t2.in;
    if (t3.in>=12) //12 inches = 1 foot
    {
        t3.in=t3.in-12;
        t3.ft=t3.ft+1;
    }
    printf("\nThe total distance covered by abhishek is %d feet and %d inches in %d minutes",t3.ft,t3.in,t3.t);

}
