#include <stdio.h>
#include "arithmetic.h"
int main()
{
    float power(float ,float );
    float n,p;
    printf("enter a number and power \n");

    scanf("%f %f",&n,&p);
    printf("%fth power of %f=\n",p,n);
    power(n,p);

    return 0;
}
