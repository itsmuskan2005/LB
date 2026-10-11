//approach 1
import java.util.Scanner;

class program33
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        int ivalue1 = 0 ,ivalue2 = 0 ,iresult = 0;

        
        scanner = new Scanner(System.in);

        System.out.println("enter first number :");
        ivalue1 = scanner.nextInt();
   
        System.out.println("enter second number :");
        ivalue2 = scanner.nextInt();

        iresult = ivalue1 + ivalue2;   //business logic

        System.out.println("Addition is : "+iresult);


       
    }
}