/* For Practice of SYSC 2006A */

/*LECTURE 1 */
// Practice 1
/*
#include <stdio.h>
#include <stdlib.h>

int main(void) //void means there is no parameters in the paranthesis.
{
	printf("Welcome User\n");
	printf("\n");
	printf("Hello World, I am here\n");
	return EXIT_SUCCESS;

}
*/

// Practice 2
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	printf("Hello\n");
	printf("\n");
	//Declare the variables we need 

	int lower, upper, step;
	float fahr, celcius;

    //Initialize the variables, Set table's lower and upper limits and step size
	lower = 0;
	upper = 300;
	step = 20;
	// Loop to calculate and print all values
	fahr = lower;
	while (fahr <= upper) {
		celcius = 5.0 /9.0 * (fahr -32.0);
		printf("%4.0f %6.1f\n", fahr,celcius);
		fahr = fahr + step;
	}
	return EXIT_SUCCESS;
}
*/

// Practice 3
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double a,b;
	int c;
	c = 10;
	a = 5.5;
	b = 4.5;
	if (c=a+a)
	printf("Addition is correct\n");
	else printf("Addition is correct\n"); //Check later
	
	return EXIT_SUCCESS;
}
*/

//Lecture 2

//Variables and data types

//Data Types -> int(4,6,10),float(1.2f,5.343f),complex,bool(True,False),str
// 

/*
#include <stdio.h>
#include <stdlib.h>

int main(int)
{
	int a,b;
	a = 5;
	b = 5;
	printf(a && b"\n");
	return EXIT_SUCCESS; //Check later

}
*/
// Lecture 3
// Raise base to the n th power, n>=0
/*
int power (int base, int n){
	int i = 1
	int pow = 1

	while (i <= n){
		pow *= base;
		i += 1;
	}
	return pow,
} */
/*
#include <stdio.h>
#include <stdlib.h>

int power (int,int);
int main (void){
	int i;
	i = 0;
	while (i < 10) {
		printf("%d %d %d\n", i, power(2,i),
			power(-3,i));
		i += 1;
	}
	return EXIT_SUCCESS;
} // i is not modified.
*/
/* 
for (expr1; expr2; expr3){
	statement;
}	
// is a concise way of writing:
expr1;
while (expr2){
	statement;
	expr3;
}

for (int i =0; i<n; i += 1)
{	statement;
}
//is a concise way of writing:
int i =0;
while (i < n){
	i += 1;
}
*/

