#include <stdio.h>

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
float power(float n,float p)
{
    int i;
    float powr;
    powr=n;
    for(i=1;i<p;i++)
    {
        powr*=n;
    }
    printf("%f \n",powr);
}