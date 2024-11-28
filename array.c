#include<stdio.h>
int main(){
	int i,x[5]={37,32,9,51,7},temp;
	for(i=0;i<5;i++){
		if(x[0]>x[i+1]){
			temp=x[0];
                       	x[0]=x[i+1];
                        x[i+1]=temp;
		}
	}
	for(i=0;i<4;i++)
	{
		if(x[0]>x[i+1]){
                        temp=x[0];
                        x[0]=x[i+1];
                        x[i+1]=temp;
	
	}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",x[i]);
	}
	
                        


return 0;
}

