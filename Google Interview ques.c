#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    float t, c, x, n, number = 5;
    /*

Since x = 5^n we can say that log x base 5 is equal to n
i.e, log(x) base 5 = n
Since the standard base in c is 10 to change the base we are going to apply basic mathematics therefore
log (x) base 5 = log (x) base 10/log (5) base 10

*/
    printf("\nIf the result obtained is an integer then it can be represented in the form of 5^n otherwise it cannot be represented in the form of 5^n\n");  
    c = log(5);
    //Taking the input i.e,x from the user
    printf("The value of x is:");
    scanf("%f", &x);

    t = log(x);
    //Printing the value t and c i.e, logarithm of x and 5 respectively

    printf(" %lf = log(%lf)\n", t, x);
    printf(" %lf = log(%lf)\n", c, number);

    n = t / c;
    //Finally printing value of n
    printf("%f = %f/%f\n", n, t, c);
    
    if(n == 0 || n == 1 || n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 7 || n == 8 || n == 9){
    	printf("It can be represented in form of 5 raised to the power n");
	}
	else{
		printf("It cannot be represented in the form of 5 raised to the power n");
	}
    
    
    return 0;
}
