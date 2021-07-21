//this program is to find the solution of function 
//using False Position Method method
/*
gcc false_position_rerror.c -lm
*/
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

    double c,c_new,c_old=0, epsilon=0.001;     //1%  relative error
    while (abs((c_new-c_old)/c_new) >= epsilon)

    {
        // Find middle point
        c = a-((b-a)*Fun(a)/(Fun(b)-Fun(a)));

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
fp(a,b);
return 0;
}
