#include<stdio.h>
int main(){
	int x,a,b,c,m,n,sum  ;
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
	 
        m=x/10;
	b=m%10;
       printf("b is %d \n",b);
       n=x/100;
       c=n;
       printf("c is %d \n",c);
       sum=a+b+c;
printf("the sum of three number is %d\n",sum);
return 0;
}
