import java.util.Scanner;
public class sum{
	public static void main(String[] args){
		Scanner teclado = new Scanner(System.in);
		int n1, n2, sum;
		System.out.print("Type the fist number: ");
		n1 = teclado.nextInt();
		System.out.print("Type the second number: ");
		n2 = teclado.nextInt();
		sum = n1 + n2;
		System.out.println("Result:");
		System.out.println(sum);
	}
}
