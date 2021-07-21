#include<stdio.h>

int main()
{
    float x,x1,fx1,x2,fx2;
    printf("Enter x, x_1, f(x_1), x_2, f(x_2) ");
    scanf("%f %f %f %f %f",&x,&x1,&fx1,&x2,&fx2);
    printf("f(%f) is equals to %f",x,fx1+(x-x1)*(fx2-fx1)/(x2-x1));
    return 0;
}