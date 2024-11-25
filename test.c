#include<stdio.h>
int main(){
	int x,temp,k,sum=0;
	printf("enter the value of x \n");
	scanf("%d",&x);
	if(x>0){
		printf("x is a positive number \n");
	}
	else{
		printf("number entered is wrong \n");
	}
	while(x>0){
		
		temp=x%10;
	        k=x/10;
		x=k;
		sum=sum+temp;
	}
	printf("the sum is %d\n",sum);

return 0;
}
