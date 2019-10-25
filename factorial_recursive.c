#include<stdio.h>
int factorial(int);

main(){
	int num, fac;
	printf("Enter a possitive integer value");
	scanf("%d",&num);
	fac=factorial(num);
	printf("\nFactorial of %d =%5d\n",num,fac);
}

int factorial(int n){
	int result;
	if(n==0)
		return(1);
	else
	result=n*factorial(n-1);
	return(result);
}
