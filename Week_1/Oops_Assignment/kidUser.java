import java.util.Scanner;


class KidUser implements LibraryUser {
    int age;
    String bookType;

    Scanner sc = new Scanner(System.in);

    @Override
    public void registerAccount() {

        
        System.out.print("Enter age: ");
        age = sc.nextInt();

        if(age<12){

            System.out.println("You have successfully registred under a Kids Account");
        }

        if(age>12){

            System.out.println("Sorry,Age must be less than 12 to register as a kid");

        }

    

    }

    @Override
    public void requestBook() {

        System.out.print("Enter book type: ");
         bookType = sc.next();

         if(bookType.equals("Kids")){

            System.out.println("Book Issued successfully , please return the book within 10 days");
         }

         else{

            System.out.println("Oops you are allowed to take only kids books");
         }


    }
}
