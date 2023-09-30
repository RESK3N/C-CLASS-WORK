//program to print the size of data types
#include <stdio.h>

	int main()
	{
    //variable declarations
		int a; //integer
		float b; //floating point
		char c; //charecter
		double d;  // double floating point

  		printf("Size of Int Data Types in C = %d bytes \n", sizeof(a));
  		printf("Size of Float Data Types in C = %d bytes \n", sizeof(b));
  		printf("Size of Double Data Types in C = %d bytes \n", sizeof(d));
  		printf("Size of Char Data Types in C = %d bytes \n", sizeof(c));
  		printf("Size of Null Data Types in C = 0 bytes\0");
   	}
