import java.util.Scanner;

class program68
{
   
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int ivalue = 0;
        
        System.out.println("enter the Frequecy :");

        Iteration iteration = new Iteration();

        ivalue = scanner.nextInt();

        iteration.Display(ivalue);
    }
}

class Iteration
{
    public void Display(int ino)
    {
       int icnt = 0;
       icnt = 1;
       do  
       {
        
        System.out.println("----------");
        System.out.println(icnt + " jay ganesh...");
        System.out.println("----------");
        icnt++;
       }while( icnt <= ino);
    }
}