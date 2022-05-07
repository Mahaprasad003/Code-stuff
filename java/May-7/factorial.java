import java.util.*;

class factorial
{
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.println("Enter n: ");
          int n = sc.nextInt();
          long i=1;
          long fact = 1;
          while(i<=n)
          {
               fact *= i;
               i++;
          }
          System.out.println("Factorial of "+n+ " is " + fact);

     }
}
