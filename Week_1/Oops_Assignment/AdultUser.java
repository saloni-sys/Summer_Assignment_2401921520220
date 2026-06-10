import java.util.Scanner;

class AdultUser implements LibraryUser {

    int age;
    String bookType;

    Scanner sc = new Scanner(System.in);

    @Override
    public void registerAccount() {

        System.out.print("Enter age: ");
        age = sc.nextInt();

        if (age > 12) {
            System.out.println("You have successfully registered under Adult Account");

        }

        if (age < 12) {
            System.out.println("Sorry Age must be greater than 12 to register as an adult ");
        }

    }

    @Override
    public void requestBook() {
        System.out.print("Enter booktype: ");
        bookType = sc.next();

        if (bookType.equals("Fiction")) {
            System.out.println("Book issued successfully");
        } else {
            System.out.println("Oops , you are allowed to take only Fiction books");
        }

    }
}