import java.util.Scanner;

public class numberGenerator {

	public static void main(String[] args) {
		
		Scanner myObj = new Scanner(System.in);
		System.out.println("\nMinimum = 0");
		System.out.println("Maximum = ?");
		System.out.print("Input the max integer number to generate:");
		 
		int x = myObj.nextInt();
		
		System.out.print("\nRandom number: " + (int)(Math.random()*x));
	}

}
