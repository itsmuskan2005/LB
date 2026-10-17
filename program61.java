import java.util.Scanner;

class program61
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
       
       for(icnt = 1;icnt <= ino;icnt++)
       {
        System.out.println("----------");
        System.out.println(icnt);
        System.out.println("----------");
       }
    }
}