#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	printf("Enter three values to find maxium and minimum values in them \n");
	scanf("%d %d %d",&a,&b,&c);
	max=a>b?a:b;
	max=max>c?max:c;
	printf("The maximum value among those is %d \n",max);
	min=a<b?a:b;
	min=min<c?min:c;
	printf("The minimum value among the values is %d",min);
}
