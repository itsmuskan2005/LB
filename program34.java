//approach 2
import java.util.Scanner;

class program34
{
    public int Addition(int ino1, int ino2)
    {
        int ians = 0;
        ians = ino1 + ino2;
        return ians;
        
    }
    public static void main(String A[])
    {
        Scanner scanner = null;
        int ivalue1 = 0 ,ivalue2 = 0 ,iresult = 0;

        
        scanner = new Scanner(System.in);

        System.out.println("enter first number :");
        ivalue1 = scanner.nextInt();
   
        System.out.println("enter second number :");
        ivalue2 = scanner.nextInt();

        iresult = Addition(ivalue1, ivalue2);   //error

        System.out.println("Addition is : "+iresult);


       
    }
}