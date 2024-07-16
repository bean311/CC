#include<stdio.h> 

int main(){
	
/*
	int a,b;

	printf("num1 : ");
	scanf("%d",&a);
	printf("num2 : ");
	scanf("%d",&b);
	
	if(a>b){
		printf("%d",a);
	}
	else if(a==b){
		printf("equal");
	}
	else{
		printf("%d",b);
	}
*/		

/*			!기본  틀
	for(int i=1,i<10;i++){
		printf("%d\n",i);
	}
*/	

/*
	for(int i=9;i>=1;i--){
		printf("%d\n",i);
	}
*/

/* 1
	int a;
	
	scanf("%d",&a);
	
	for(int i=-a;i<=a;i++){
		printf("%d ",i);
	}
*/
	
/* 2
	int a, sum;
	
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++){
			sum+=i;
	}
	printf("%d",sum );
*/
	
/* 3
	int a;
	
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++){
		if(i%3==0){
			printf("%d ",i);
		}
	}
*/

/* 4
	int n, sum;
	int count=0;
	
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(i%6==0){
			printf("%d\n",i);
			count++;
			sum+=i;
		}	
	}
	printf("count : %d\n",count);
	printf("sum : %d",sum);
*/	
	
/* 5
	int n;
	 
	scanf("%d",&n);
	
	for(int i=9;i>0;i--){
		printf("%d X %d = %d\n",n, i,n*i);
	}
*/
	
/* baekjoon 10950
	int n,a,b;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
*/
	
	int x, n, sum;
	int a, b;
	
	scanf("%d\n",&x);
	scanf("%d\n",&n);
	
	for(int i=1;i<=n;i++){
		scanf("%d %d",&a, &b);
		sum = sum+a*b;
		
	}
	if(sum==x){
		printf("Yes");
	}
	else{
		printf("No");
	}
}