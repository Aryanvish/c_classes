#include<stdio.h>
int main(){
	int x,a,b,c ;
	printf("enter the value of x \n");
	scanf("%d",&x);
	if(x>0){
		printf("x is a positive number \n");
	}
	else{
		printf("number entered is wrong \n");
	}
a=x%10;
	printf("a is %d \n",a);
b=x%100;
       printf("b is %d \n",b);
c=x%1000;
       printf("c is %d \n",c);

return 0;
}
