import java.util.*;

class eve_odd
{
  public static void main(String[] args)
  {
      Scanner sc = new Scanner(System.in);
      System.out.print("Enter the number of elements you want to store: ");
      int n = sc.nextInt();
      int[] arr = newint[10];
      System.out.println("Enter the elements of the array: ");
      for(int i=0; i<n; i++)
      {
          arr[i]=sc.nextInt();
      }
      int eve = 0;
      int odd = 0;
      for(int i=0;i<10;i++)
      {
          if(arr[i] % 2 == 0)
          {
              eve++;
          }
          if(arr[i] % 2 ! == 0)
          {
              odd++;
          }
      }
      System.out.println("Number of even elements are: "+eve);
      System.out.println("Number of odd elements are: "+odd);

  }
}
