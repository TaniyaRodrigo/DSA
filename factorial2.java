import java.util.*;
class factorial2{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a positive number");
		int num = input.nextInt(); 
        System.out.println("Factorial of "+ num + " is " + factorial(num));
    }
    
    static int factorial(int n){ 
        if (n == 0) 
          return 1; 
        else 
        return n*factorial(n-1); 
    } 
    
    
    
    }
