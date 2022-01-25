#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,principal,compound;
	printf("Enter the values of principal amount,rate of intrest and time to find  principal and compound intrest \n");
	scanf("%f %f %f",&p,&r,&t);
	principal=p*r*t/100 ;
	printf("Principal intrest is %f \n",principal);
	compound=(p*(pow((1+(r/100)),t)))-p;
	printf("Compound intrest is %f",compound);
}
