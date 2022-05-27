import java.util.*;

class factorial
{
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.print("Enter the number of elements you want to store: ");
          int n = sc.nextInt();
          int[] arr = new int[n];
          System.out.println("Enter the elements of the array: ");
          for(int i=0; i<n; i++)
          {
              arr[i]=sc.nextInt();
          }
          int[] parr = new int[n];
          for(int i=1;i<n;i++)
          {
               int fact = 1;
               for(int j=0;j<arr[i];j++)
               {
                    fact = fact*i;
               }
               parr[i] = fact;
          }
          System.out.println("The factorial array is: ");
          for(int i=0;i<n;i++)
          {
               System.out.println(parr[i]);
          }
     }
}
