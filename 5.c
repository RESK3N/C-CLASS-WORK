//Program in C to print the memory addresses of 5 variables
#include <stdio.h>
int main()
{
    int a=5,b=3,c=7,d=12290,e=1837917871; // variable declaration and initialisation
    printf("%p\n",a);
    printf("%p\n",b);
    printf("%p\n",c);
    printf("%p\n",d);
    printf("%p\n",e);
}