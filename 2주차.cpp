#include<stdio.h>

int main(){

/*	
	int a, b;
	printf("num1 :");
	scanf("%d", &a);
	printf("num2 :");
	scanf("%d", &b);
	
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d X %d = %d\n",a,b,a*b);
	printf("%d / %d = %d",a,b,a/b);
*/

/*
	int a,b;
	a=20;
	b=5;
	
	a+=b;
	printf("a = %d\n", a);
	a*=b;
	printf("a = %d\n", a);
	a-=b;
	printf("a = %d\n", a);
	a/=b;
	printf("a = %d\n", a);
	a%=b;
	printf("a = %d\n", a);
*/	

/*	
	int num1=10;
	int num2=20;
	
	int num3= ++num1 + num2++; // num2++  =>> num2값을 num1의 값과 더한후 num2값에 따로 +1
	
	printf("num1= %d\n", num1);
	printf("num2= %d\n", num2);
	printf("num3= %d\n", num3);
*/
	
/* 
	int a;
	
	printf("num :");
	scanf("%d", &a);
	
	if(a>0){
		printf("++++");
		
	}
	else
		printf("----");
*/	

/*
	int a;
	printf("num : ");
	scanf("%d", &a);
	
	if(a%2==0){
		printf("even");
	}
	
	else{
		printf("odd");
	}
*/	
	
/*
	int a;
	
	printf("num : ");
	scanf("%d", &a);
	
	if(a%2==0 && a%3==0){
		printf("O");
	}
	
	else{
		printf("X");
	}
*/

/*
	int a;
	
	printf("num : ");
	scanf("%d", &a);
	
	if(12%a==0 && 30%a==0){
		printf("O");
	}
	else{
		printf("X");
	}
*/
	
/*	
	int a;
	
	printf("score : ");
	scanf("%d", &a);
	
	if(a<=100 && a>=90){
		printf("A");
	}
	else if(a>=80){
		printf("B");
	}
	else if(a>=70){
		printf("C");
	}
	else if(a>=60){
		printf("D");
	}
	else{
		printf("F");
	}
*/

/*	백준 2884
	int h, m;
	
	printf("time : ");
	scanf("%d %d", &h, &m);
	
	if(0<=h && 24>=h && 0<=m && 60>=m){
		if (m-45<0){
			if(h-->0){
				printf("%d %d", h--,m+60-45);
			}
			else if(h--<0){
				printf("23 %d",m+60-45);
			}
		else if(m-45>0){
			printf("%d %d",h,m-45);	
		}		
	else{
	}		
		}	
		
	}
*/

/*   백준 2525
	int h,m, time;
	
	scanf("%d %d", &h,&m);
	scanf("%d", &time);
	m= m+time;
	
	if(m>=60){
		h = h+ m/60;
		m = m%60;
		
		if(h>24){
			h = h%24;
		}
	}
	printf("%d %d",h ,m);
*/	
}