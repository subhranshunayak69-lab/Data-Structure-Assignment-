#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int mult(int,int);
int divide(int,int);
int main()
{
	int num1,num2,a1,a2,a3,a4;
	printf("Enter two integers: ");
	scanf("%d %d",&num1,&num2);
	a1 = add(num1,num2);
	a2 = sub(num1,num2);
	a3 = mult(num1,num2);
	a4 = divide(num1,num2);
	printf("\n Addition is %d, \n Subtraction is %d, \n Multiplication is %d, \n Division is %d \n",a1,a2,a3,a4);
	return 0;
}
	
	int add(int a,int b){
		return (a+b);
	}
	int sub(int a,int b){
		return (a-b);
	}
	int mult(int a,int b){
		return (a*b);
	}
	int divide(int a,int b){
		return (a/b);
	}


