#include<stdio.h>
#include<stdlib.h>

void prime(int);

int main(){
    int x;
    printf("Enter an Integer: ");
    scanf("%d",&x);
	prime(x);
    return 0;
}
void prime(int num)
{
    int i;
    for (i=2;i<num;i++)
    {
        if(num%i==0){
            printf("\n%d is not a prime number",num);
            break;
        }
    }
    if (i==num)
    {
        printf("%d is a prime number",num);
    }
}
