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

    double c,c_new,c_old=0, epsilon=0.01;     //1%  relative error
    while (abs((c_new-c_old)/c_new) >= epsilon)

    {
        // Find middle point
        c = (a+b)/2;
        if (c_old==0)
            c_old=a;
        else 
            c_old=c_new;
        // Check if middle point is root
        if (Fun(c) == 0.0)
            break;

        // Decide the side to repeat the steps
        else if (Fun(c)*Fun(a) < 0)
        {
            b = c;
            c_new = c;
        }
        else
        {
            a = c;
            c_new = c;
        }

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
