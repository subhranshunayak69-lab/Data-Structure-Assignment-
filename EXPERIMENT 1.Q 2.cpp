#include<stdio.h>
#include<stdlib.h>
int factorial(int);
int main(){
	int fact,n;
	printf("Enter an integer: ");
	scanf("%d",&n);
	fact = factorial(n);
	printf("\n Factorial is %d",fact);
	return 0;
}
int factorial (int num)
{
	if(num==1)
	return 1;
else
	return num * factorial (num-1);
}  
