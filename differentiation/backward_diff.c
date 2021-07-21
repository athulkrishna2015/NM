#include<stdio.h>
#include<math.h>

int main ()
{
    float fun(float);
    float x,h;
    printf("Enter value of x and h ");
    scanf("%f %f",&x,&h);
    printf("\nDerivative at x=%f is %f ",x,(fun(x)-fun(x-h))/h);
    return 0;
}
float fun(float x)
{
    return (pow(x,2));         //f(x)=x^2
}