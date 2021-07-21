//this program is to find the solution of function 
//using bisection method
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float Fun(float x) 
{
	return (x*exp(x)-1);
}

void bisection(double a, double b)
{
    if (Fun(a) * Fun(b) >= 0)
        printf("You have not assumed right a and b\n");

    double c, epsilon=0.01;     //1% tolerence
    while ((b-a) >= epsilon)

    {
        // Find middle point
        c = (a+b)/2;

        // Check if middle point is root
        if (Fun(c) == 0.0)
            break;

        // Decide the side to repeat the steps
        else if (Fun(c)*Fun(a) < 0)
            b = c;
        else
            a = c;
    }

printf("The root is %f\n",c);
}

int main()

{
double a, b;
a=0.2; b=1;
bisection(a,b);
return 0;
}
