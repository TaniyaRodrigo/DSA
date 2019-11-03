#include<stdio.h>

int main(){
	int n,i,j,ar[100],possition=1;
	printf("Enter the number of elements of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter %d element of the array:",i+1);
		scanf("%d",&ar[i]);
	}
	int min=ar[0];
	for(i=1;i<n;i++){ 
		if(ar[i]<min){
			min=ar[i];
			possition=i+1;
		}
	}
	printf("Smallest number is %d\n",min);
		printf("Smallest number possition is %d",possition);
}
