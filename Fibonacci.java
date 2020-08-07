import java.util.*;

public class Fibonacci{

	public static void main(String args[]){
	Scanner input= new Scanner(System.in);
		System.out.println("Enter a positive number");
	int num= input.nextInt();
		System.out.println("the fibonacci value is "+fibo(num));
	}
	
	static int fibo(int x){
		if (x==0)
		return 0;
		else if(x==1)
		return 1;
		else
		return fibo(x-1)+fibo(x-2);
	}
}
