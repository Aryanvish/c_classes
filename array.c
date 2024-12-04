#include<stdio.h>
int main(){
	int i,x[10]={1,3,5,7,12,14,16,20,24,25},temp,j,k,mid,low,high,s;
	for(j=0;j<4;j++){ 

	for(i=j;i<10;i++){ if(x[j]>x[i]){
			temp=x[j];
                       	x[j]=x[i];
                        x[i]=temp;
		}
	}
	} 
	
	for(i=0;i<10;i++){
	printf("%d\t",x[i]);
	}
	int flag = 0;
	printf("\n enter the value of k ");
	scanf("%d",&k);
	for(i=0;i<=10;i++){
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
	printf("enter value of s\n");
	scanf("%d",&s);

	           low=0;
                   high=9;
                   mid=(low+high)/2; 
		   if(s<x[mid]){
			   printf("s is on left side \n");
		   }
		   else if(s>x[mid]){
			   printf("s is on right side \n");
		   }
		   else {
			   printf("s is in mid\n");
		   }
		 
return 0;
}

