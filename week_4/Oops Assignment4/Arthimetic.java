import java.util.Scanner;

class Arthimetic implements Test{


    @Override
    public void square() {
         Scanner sc = new Scanner(System.in);

    System.out.print("Enter a number: ");
    int num = sc.nextInt();

    System.out.println("Square = " + (num * num));
    }
}

