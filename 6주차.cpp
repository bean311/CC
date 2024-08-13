#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

/*
	int arr[10]={0,};
	
	for(int i=0;i<10;i++){
		scanf("%d", &arr[i]);
	}
	printf("\n");
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
*/

/*	
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	
	for(int i=0;i<10;i++){
		if(arr[i]%2 ==1){
			printf("%d\n", arr[i]);
		}
	}	
*/

/*baekjoon 10807	
	int n;
	scanf("%d",&n);
	int arr[100];
	
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);	
	}
	int find,cnt=0;
	scanf("%d", &find);
	for(int i=0;i<n;i++){
		if(arr[i]==find){
			cnt++;
		}
	}
	printf("%d",cnt);
*/

/*baekjoon 10871

	int n1,n2;
	scanf("%d %d", &n1,&n2);
	int arr[n1];
	
	for(int i=0;i<n1;i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0;i<n1;i++){
		if(arr[i]<n2){
			printf("%d ",arr[i]);
		}
	}
*/

/*baekjoon 10818
	int n,max=0,min=100000;
	scanf("%d",&n);
	int arr[1000];
	
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("%d %d", min,max);	
*/

/*baekjoon 2562
	int max=0, find;
	
	int arr[10];
	for(int i=0;i<9;i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0;i<9;i++){
		if(arr[i]>max){
			max = arr[i];
			find = i+1;
		}
	}
	printf("\n%d\n%d", max, find);	
*/

/* random
	srand(time(NULL));
	int sum=0;
	int arr[10];
	
	for(int i=0;i<9;i++){
		arr[i]=rand()%9 + 1;
	}
	for(int i=0;i<9;i++){
		printf("%d ",arr[i]);
		sum+=arr[i];
	}
	printf("\n%d",sum);
*/

/* baekjoon10801
	int an,bn;
	int aw=0,bw=0;
	int aarr[10];
	int barr[10];
	
	for(int i=0;i<10;i++){
		scanf("%d",&aarr[i]);
	}
	for(int i=0;i<10;i++){
		scanf("%d",&barr[i]);
	}
	
	for(int i=0;i<10;i++){
		if(aarr[i]>barr[i]){
			aw++;
		}
		else if(aarr[i]<barr[i]){
			bw++;
		}
	}
	if(aw>bw){
		printf("A");
	}
	else if(aw<bw){
		printf("B");
	}
	else{
		printf("D");
	}
*/
	
	int n,sum=0;
	int max=0,min=10000;
	scanf("%d", &n);
	int arr[101];
	
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(max<arr[i]){
			max = arr[i];
		}
		if(min>arr[i]){
			min = arr[i];
		}
	}
	printf("%d",(sum-min-max)/(n-2));
}




