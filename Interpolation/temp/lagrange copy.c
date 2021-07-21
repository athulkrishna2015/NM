/*In this C program, x and y are two array for storing x data and f(x) data respectively. 
xp is interpolation point given by user and output of Lagrange interpolation method is obtained in pnx. */

#include<stdio.h>

void main()
{
	 float x[100], f[100], xp, pnx=0, li;
     int n;
	 /* Input Section */
	 printf("Enter number of data points: ");
	 scanf("%d", &n);
	 printf("Enter data:\n");
	 for(int i=0;i<=n-1;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("f[%d] = ", i);
		  scanf("%f", &f[i]);
	 }
	 printf("Enter interpolation point: ");
	 scanf("%f", &xp);
	 /* Implementing Lagrange Interpolation */
	 for(int i=1;i<=n;i++)
	 {
		  li=1;
		  for(int j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	li = li* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  pnx = pnx + li * f[i];
	 }
	 printf("Interpolated value of p_%d(%f) is %f.",n-1, xp, pnx);
}
