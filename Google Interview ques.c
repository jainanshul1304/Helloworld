#include<stdio.h>
#include<math.h>

int main()
{

float t,c,x,n,number = 5;
/*

Since x = 5^n we can say that log x base 5 is equal to n
i.e, log(x) base 5 = n
Since the standard base in c is 10 to change the base we are going to apply basic mathematics therefore
log (x) base 5 = log (x) base 10/log (5) base 10

*/
c = log(5);
//Taking the input i.e,x from the user
printf("the value of x is:");
scanf("%f",&x);

t = log(x);
//Printing the value t and c i.e, logarithm of x and 5 respectively

printf(" %lf = log(%lf)\n",t,x);
printf(" %lf = log(%lf)\n",c,number);

n = t / c;
//Finally printing value of n
printf("%f = %f/%f\n",n,t,c);
scanf("%f%f%f",&t,&c,&n);


return 0;
}

