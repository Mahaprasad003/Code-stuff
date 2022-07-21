class TC_Demo
{
     public static void main(String args [])
     {
          int a = 10;
          int b = 0, c = 0;
          int x,y;
          try
          {
               x = a/(b-c);
          }
          catch(ArithmeticException e)
          {
               System.out.println("Divide by Zero");
          }
          y = a/(b+c);
          System.out.println("y=" + y);
     }
}
