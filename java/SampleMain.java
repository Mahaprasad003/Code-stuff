import java.util.*;

class Sample{
     int a = 10;
     static int b = 20;
     public void input(int x, int y)
     {
          a = x;
          b = y;
     }
     public void showa(){
          System.out.println("Value of a = "+a);
     }
     public void showb(){
     System.out.println("Value of b = "+b);
     }
}

class SampleMain
{
     public static void main(String[] args) {
          Sample ob1 = new Sample();
          ob1.input(3,4);
          ob1.showa();
          ob1.showb();
          Sample ob2 = new Sample();
          ob2.showa();
          ob2.showb();
     }
}
