import java.util.*;

class factorial3{
	public static void main(String args[]){
		Scanner input= new Scanner(System.in);
		System.out.println("Enter a positive number");
		int num=input.nextInt();
		System.out.println("Factorial of "+ num + " is " + factorial(num));
	}
	
	public static int factorial(int x){
		int j=1;
		for(int i=2;i<=x;i++){
			j=j*i;
		}
		return j;
		}
}
