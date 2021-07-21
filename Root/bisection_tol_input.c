//this program is to find the solution of function 
//using bisection method
/*
You need to link with the math library:

gcc -o sphere sphere.c -lm
*/
#include<stdio.h>
#include<math.h>

//fuction
float Fun(float x)      
{
	return (x*exp(x)-1);
}

//bisection 
void bisection(double a, double b,double epsilon)      //double becase we are dealing with large numbers 
{
    if (Fun(a) * Fun(b) >= 0)
    {
        printf("You have not assumed right a and b\n");
        return;
    }

    double c;
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

printf("The root is %lf\n",c);
}

int main()

{
double a, b, e, epsilon;
printf("enter a and b \n");
scanf("%lf %lf",&a,&b);
printf("enter Tolerence \n");
scanf("%lf",&e);
epsilon=e/100;
bisection(a,b,epsilon);
return 0;
}