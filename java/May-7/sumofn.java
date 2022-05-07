import java.util.*;

class sumofn
{
     public static void main(String[] args) {
          System.out.println("Enter n: ");
          Scanner sc = new Scanner(System.in);
          int n = sc.nextInt();
          int sum=0;
          int i=0;
          do{
               sum += i;
               i++;
          }while(i<=n);
          // for (int i=0;i<=n;i++)
          // {
          //      sum += i;
          //
          // }
          System.out.println("Sum till n is: " + sum);
     }
}
