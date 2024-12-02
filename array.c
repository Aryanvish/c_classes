#include<stdio.h>
int main(){
	int i,x[5]={37,32,9,51,7},temp,j,k;
	for(j=0;j<4;j++){

	for(i=j;i<5;i++){
		if(x[j]>x[i]){
			temp=x[j];
                       	x[j]=x[i];
                        x[i]=temp;
		}
	}
	}
	for(i=0;i<5;i++){
	printf("%d\t",x[i]);
	}
	int flag = 0;
	printf("\n enter the value of k ");
	scanf("%d",&k);
	for(i=0;i<=5;i++){
		if(k==x[i]){
			printf("the element exists\n");
			flag = 0;
			break;
		}
		else{
			flag = -1;
			
		}
	}

	if(flag==-1)
	{
		printf("element does not exist\n");
	}

return 0;
}

