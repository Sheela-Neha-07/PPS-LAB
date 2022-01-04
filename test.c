#include<stdio.h>
void main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	printf("The arithematic operator values of c is %d,%d,%d,%d,%d\n",a+b,a-b,a*b,a/b,a%b);
	printf("The relation operator values of c is %d,%d,%d,%d\n",a<b,a>b,a<=b,a>=b);
	printf("The logical operation values of c is %d,%d,%d\n",a&&b,a||b,!(a==b));
	printf("The increasement values of c is %d,%d,%d,%d\n",a++,++a,b++,++b);
	printf("The decreasement values of c is %d,%d,%d,%d\n",a--,--a,b--,--b);
	printf("The bitwise AND  value of c is %d\n",a&b);
	printf("The bitwise OR value of c is %d\n",a|b);
	printf("the bitwise NOT value of c is %d\n",a^b);
}
