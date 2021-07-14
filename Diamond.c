#include<stdio.h>
void main(){
	int n;
	printf("Enter no. of rows for a diamond:");
	scanf("%d",&n);
	for(int i = 1;i <=n;i++){
		for(int j = 1;j <= 2*n-1;j++){
				if(j >= n-(i-1) && j <= n+(i-1)){
					printf("*");
				}
				else{
					printf(" ");
				}
		}
		printf("\n");
	}

	for(int i = n;i >=0;i--){
		for(int j = 1;j <= 2*n-1;j++){
				if(j >= n-(i-1) && j <= n+(i-1)){
					printf("*");
				}
				else{
					printf(" ");
				}
		}
		printf("\n");
	}
}
