#include<stdio.h>
int main(){

/*
	int max;
	int min=101;
	
	for(int i=0;i<7;i++){
		int a;
		scanf("%d",&a);
		
		if(a>max){
			max = a;
		}
		if(a<min){
			min=a;
		}	
	}
	printf("%d %d",max, min);
*/

/*
//	while 
	int i;
	i=1;
	while(i<=10){
		printf("%d ", i);
		i++;
	}
	return 0;
*/

/*
//do while 
	int i;
	i=1;
	do{
		printf("%d ",i);
		i++;
	}while(i<=10);
	return 0;
*/
	
/*
	int num, count;
	int a=1;
	
	scanf("%d", &num);
	
	while(num/a!=0){
		count++;
		a=a*10;
	}
	printf("%d", count);
*/	
	
/*	
	int num, sum;
	
	scanf("%d", &num);
	
	while(num>0){
		sum+=num%10;
		printf("%d ",num%10);
		
		num/=10;
	}
	printf("%d", sum);	
*/

/*
	int even=0;
	int odd=0;
	int n=1;
	
	while(n<=10){
		if(n%2==0){
			even+=n;
		}
		else{
			odd+=n;
		}
	n++;	
	}
	printf("sum_even : %d\nsum_odd : %d", even,odd);	
*/

/*
	int n, cnt, sum=0;
	int a=1;
	
	scanf("%d", &n);
	
	while(a<=n){
		if(n%a==0){
			cnt++;
			sum+=a;
			printf("%d ", a);
		}
	a++;		
	}
 	printf("\nsum : %d\ncnt : %d",sum, cnt);
*/

/*
	int n, re=0;
	scanf("%d", &n);
	int sum=n;
	
	while(n>0){
		re=re*10 + n%10;
		n/=10;	
	}
	printf("%d",re);
	printf("\n%d",sum+re);
*/


	int n;
	scanf("%d", &n);
		
	switch(n/10){
		case 0:
			printf("0~9");
			break;
		case 1:
			printf("10~19");
			break;
		case 2:
			printf("20~29");
			break;
		case 3:
			printf("30~39");
			break;
		case 4:
			printf("40~49");
			break;
		case 5:
			printf("50~59");
			break;
		default:
			printf("??");
			break;	
	}
}