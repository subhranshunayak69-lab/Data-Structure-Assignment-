#include<stdio.h>
#include<stdlib.h>
void fib(int);
int main(){
	int a;
	printf("Enter an Integer: ");
	scanf("%d\n",&a);
	fib(a);
	return 0;
}
void fib(int num)
{
	int i,num1,num2,next_num;
	num1 = 0;
	num2 = 1;
	for (i=1;i<=num;i++)
	{
		if (i==1)
		{
			printf("\n%d",num1);
		}
		else if(i==2)
		{
			printf("%d",num2);
		}
		else
		{
		  next_num = num1+num2;
		  printf("%d",next_num);
		  num1 = num2;
		  num2 = next_num;	
		}
	}
}
