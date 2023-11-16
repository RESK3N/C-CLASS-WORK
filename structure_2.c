//Write a Program in C to add two complex numbers
#include <stdio.h>
int main()
{
    int i;
    struct stu // structure declaration
    {
        int real;
        int img;
    }c1,c2,c3; // structure variables
    printf("Enter real part of the number 1 >> \n");
    scanf("%d",&c1.real);
    printf("Enter imaginary part of the number 1 >> \n");
    scanf("%d",&c1.img);
    printf("Enter real part of the number 2 >> \n");
    scanf("%d",&c2.real);
    printf("Enter imaginary part of the number 1 >> \n");
    scanf("%d",&c2.img);
    c3.real=c1.real+c2.real;// c3.real used to store the sum of real parts of the two numbers
    c3.img=c1.img+c2.img;// c3.img used to store the sum of imaginary parts of the two numbers
    printf("Sum of the two complex numbers are real = %d imaginary = %d",c3.real,c3.img);
}
