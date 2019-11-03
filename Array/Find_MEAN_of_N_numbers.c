#include<stdio.h>

int main(){
	int n,i, ar[20];
	int count=0;
	printf("Enter the number of elements of the array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d element of the array:",i);
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n;i++){
		
		count=count+ar[i];
	}
	int mean=count/n;
	printf("the mean of %d numbers is %d",n, mean);
}
