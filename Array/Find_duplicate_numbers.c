#include <stdio.h>

int main(){
	int ar[10],size,i,j,flag=0;
	printf("\nEnter the size of array");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d", &ar[i]);
	}
	
		for(i=0;i<size;i++){
			for(j=i+1; j<size; j++){
				if(ar[i]==ar[j]&& i!=j){
					flag=1;
					printf("Have duplicate numbers");
				}
			}
		}
	


	if(flag==0){
		printf("No duplicate numbers");
	}
	
	return 0;
}


