#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,D;
	printf("Enter the co-efficients for the quadratic equation. \n");
	scanf("%d %d %d",&a,&b,&c);
	float d,e;
	d=(-b+sqrt(b*b-4*a*c))/2*a , e=(-b-sqrt(b*b-4*a*c))/2*a ;
	printf("The quadratic equation is %dx^2+%dx+%d=0 \n The roots are %f and %f ",a,b,c,d,e);
}
	

