#include<stdio.h>
#include<stdlib.h>
int GCD (int,int);
int main (){
	int num1,num2,gcd;
	printf("Enter two Integers: ");
	scanf("%d%d",&num1,&num2);
	gcd = GCD(num1,num2);
	printf("\nGCD is %d",gcd);
	return 0;
}
int GCD(int a,int b){
	int temp;
	while (b!=0){
		temp = b;
		b = a%b;
		a = temp;
	}
	return a;
}
