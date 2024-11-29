#include<stdio.h>
int main(){
	int i,x[5]={37,32,9,51,7},temp,j;
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

	
                        


return 0;
}

