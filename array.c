#include<stdio.h>
int main(){
	int i,x[5]={23,5,47,35,2},temp;
	for(i=0;i<5;i++){
		if(x[i]>x[i+1]){
			temp=x[i];
                       	x[i]=x[i+1];
                        x[i+1]=temp;
		}
	}
	for(i=0;i<4;i++)
	{
		if(x[i]>x[i+1]){
                        temp=x[i];
                        x[i]=x[i+1];
                        x[i+1]=temp;
	
	}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",x[i]);
	}
	
                        


return 0;
}

