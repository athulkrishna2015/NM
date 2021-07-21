//this program is to find the solution of function 
//using False Position Method method
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float Fun(float x) 
{
	float y;
    	y = (x*exp(x)-1);
        return y;
}

void fp(double a, double b)
{
    if (Fun(a) * Fun(b) >= 0)
    {
        printf("You have not assumed right a and b\n");
        return;
    }

    double c, epsilon=0.01;     //1% error
    while ((b-a) >= epsilon)

    {
        // Find middle point
        c = a-((b-a)*Fun(a)/(Fun(b)-Fun(a)));

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
fp(a,b);
return 0;
}
