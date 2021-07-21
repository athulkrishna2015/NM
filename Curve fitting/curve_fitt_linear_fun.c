#include<stdio.h>
#include<math.h>

int main()
{
    float fun(float);

    float x[100],y[100],sum_x=0,sum_y=0,x_sqr,x_sqr_sum=0,xy,xy_sum=0,a,b,xf;
    int n;
   
    printf("Enter number of data points ");
    scanf("%d",&n);
   
    for (int i=1;i<=n;i++)
    {
        printf("Enter x[%d] = ",i);
        scanf("%f",&x[i]);
        printf("Enter y[%d] = ",i);
        scanf("%f",&y[i]);

        sum_x=sum_x+fun(x[i]);
        sum_y=sum_y+y[i];

        x_sqr=pow(fun(x[i]),2);
        x_sqr_sum=x_sqr_sum+x_sqr;

        xy=fun(x[i])*y[i];
        xy_sum=xy_sum+xy;

    }
    b=(n*xy_sum-sum_x*sum_y)/(n*x_sqr_sum-pow(sum_x,2));
    a=(sum_y-b*sum_x)/n;

    printf("Curve fitting linear polynomial bf(x)+a is %f+%fx\n",b,a);

    printf("Enter the value of x to be found ");
    scanf("%f",&xf);
    printf("The value of function at x=%f is %f",xf,b*fun(xf)+a);

    return 0;
}
float fun(float x)
{
    return exp(x/4);
}