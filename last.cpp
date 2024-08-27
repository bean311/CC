#include<stdio.h>

int main(){

/*
	int n,a,b,x;
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	
	if(n%a==0){
		if(n%b==0){
			x=1;
		}
	}
	else{
		x=0;
	}
	printf("%d",x);
*/

/*
	int sum=0;
	
	for(int i=1;i<=1000;i++){
		if(i%3==0){
			printf("%d ",-i);
			sum-=i;
		}
		else{
			printf("%d ",i);
			sum+=i;
		}	
	}
	printf("\n%d", sum);
*/


	int sum=0,min=10000;
	int input[100];
	
	for(int i=0;i<4;i++){
		scanf("%d",&input[i]);
		
	}
	for(int i=0;i<4;i++){
		if(input[i]%2==1){
			sum+=input[i];
			if(input[i]<min){
			min=input[i];
			}
		}			
	}
	if(sum==0){
		printf("-1");
	}
	else{
		printf("%d",sum);
		printf("\n%d",min);
	}	
}