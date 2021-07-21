//By me
#include<stdio.h>

int main()
{
    float pnx,pnxi,f[100],l[100],xi[100],x;
    int n;
    printf("Enter x ");
    scanf("%f",&x);
    printf("Enter n ");
    scanf("%d",&n);
     for(int i=0;i<=n;i++)
    {
        printf("Enter xi ");
        scanf("%f",&xi[i]);
        printf("Enter fi ");
        scanf("%f",&f[i]);
    }
    for(int i=0;i<=n;i++)
    {
        l[i]=1;
        for(int j=0 ;j<=n;j++)
        {
            if (i==j)
            continue;
            l[i]=l[i]*(x-xi[j])/(xi[i]-xi[j]);
          //  printf("l[%d] %f\n",i,l[i]);
        }
        pnxi=f[i]*l[i];
     //   printf("pnx%f  %f\n",i,pnxi);
        pnx+=pnxi;
      //  printf("pnx %f\n",pnx);
    }
    printf("Value of p_%d(%f)=%f",n,x,pnx);
}