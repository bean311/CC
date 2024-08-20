#include<stdio.h>

int main(){
	
//	int arr1[4][5];
//	int arr2[7][5];
//	float arr3[4][5];
//	char arr4[9][12];

/*
	int arr1[3][4]={0};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
*/

/*
	int i,j;
	int ar[6][9]={{ 0, 0, 0, 1, 0, 0, 0, 0, 0},
				{ 0, 0, 0, 0, 0, 0, 0, 2, 0},
				{ 0, 0, 0, 0, 1, 0, 0, 0, 0},
				{ 0, 2, 0, 1, 0, 0, 1, 0, 0},
				{ 0, 0, 0, 1, 0, 0, 0, 0, 0},
				{ 0, 0, 1, 0, 0, 0, 1, 0, 0},
				};
	for(int i=0;i<6;i++){
		for(int j=0;j<9;j++){
			if(ar[i][j]==0){
				ar[i][j]=1;
			}
			else{
				ar[i][j]=0;
			}
		}
	}			
	for(int i=0;i<6;i++){
		for(int j=0;j<9;j++){
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
*/		

/*  //baekjoon2566

	
	int max=0,h,y;
	int arr[10][10];
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
				h=i;
				y=j;
			}
		}
	}
	printf("%d",max);
	printf("\n%d %d",h,y);
*/

/* //baekjoon2563

	int t;
	int n,m,cnt=0;
	scanf("%d",&t);
	int paper[100][100]={0,};
	
	while(t--){
		scanf("%d %d",&n,&m);
		for(int i=n;i<n+10;i++){
			for(int j=m;j<m+10;j++){
				paper[i][j]=1;
			}
		}		
	}
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			if(paper[i][j]==1){
				cnt++;
			}
		}
	}
	printf("%d",cnt);
*/

/* //baekjoon2738

	int x,y;
	scanf("%d %d",&x,&y);
	int ar1[100][100];
	int ar2[100][100];
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d",&ar1[i][j]);
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d",&ar2[i][j]);
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("%d ",ar1[i][j]+ar2[i][j]);	
		}
		printf("\n");
	}
*/ 

/* // (4 100 50 70 110) (3 1 10000 3)     

	int t,start,end;
	scanf("%d",&t);
	int arr[10001]={0,};
	int max=0;
	
	for(int i=1;i<=t;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=1;i<=t;i++){
		if(arr[i+1]-arr[i]>max){
			max=arr[i+1]-arr[i];
			start=i;
			end=i+1;
		}
	}
	printf("%d %d",start,end);
	
*/
}