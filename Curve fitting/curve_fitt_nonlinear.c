#include<stdio.h>
#include<math.h>

int main()
{
    float x[100],y[100],sum_x=0,sum_y=0,x_sqr,x_sqr_sum=0,xy,xy_sum=0,a,b;
    int n;
   
    printf("Enter number of data points ");
    scanf("%d",&n);
   
    for (int i=1;i<=n;i++)
    {
        printf("Enter x[%d] = ",i);
        scanf("%f",&x[i]);
        printf("Enter y[%d] = ",i);
        scanf("%f",&y[i]);

        sum_x=sum_x+log(x[i]);
        sum_y=sum_y+log(y[i]);

        x_sqr=pow(log(x[i]),2);
        x_sqr_sum=x_sqr_sum+x_sqr;

        xy=log(x[i])*log(y[i]);
        xy_sum=xy_sum+xy;

    }
    b=(n*xy_sum-sum_x*sum_y)/(n*x_sqr_sum-pow(sum_x,2));
    a=(sum_y-b*sum_x)/n;
    a=exp(a);
    printf("Curve fitting Non-linear polynomial ax^b is %fx^%f",a,b);

    return 0;
}
