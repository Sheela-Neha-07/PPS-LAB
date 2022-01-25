
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your percentage \n");
	scanf("%d",&marks);
	if  (marks>=70)
{

		printf("Your %d percentage indicates distinction",marks);
	}
	else if (marks<70)
{
		printf("your %d percentage didn't got distintion.Better luck next time",marks);
}
}
