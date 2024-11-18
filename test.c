#include<stdio.h>
int main(){
	int x,i ;
	printf("enter the value of x \n");
	scanf("%d",&x);
	for(i=2;i<x;i++)
		if(x%i==0){
			printf("x is not a prime number\n");
			break;
	       	}
		else{
			printf("x is a prime number\n");
		}

return 0;
}
