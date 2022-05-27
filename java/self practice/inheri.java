import java.util.*;

class Dog
{
     Scanner sc = new Scanner(System.in);
     void Height(int a)
     {
          System.out.println("Height is: "+a);
     }
}

class puppy extends Dog
{
     int p = sc.nextInt();
     

}
class program
{
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.println("Enter height of dog: ");
          int h = sc.nextInt();
          Dog cookie = new Dog();
          cookie.Height(h);
     }
}
