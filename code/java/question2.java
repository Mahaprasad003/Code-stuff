// Create a class time with 3 instance variables. Hours, minutes and seconds.
// Define a method "input time" to initialize the instance variables.
// Define a method "display time" to display the time object.

import java.util.*;

class Time
{
     int h; int m; int sec;

     // Scanner sc = new Scanner(System.in);
     public void inputTime()
     {
          Scanner sc = new Scanner(System.in);
          h = sc.nextInt();
          m = sc.nextInt();
          sec = sc.nextInt();
     }
     public void displayTime()
     {
          System.out.println("Time is "+h+":"+m+":"+sec);

     }
     public static void main(String[] args) {
          Time obj = new Time();
          obj.inputTime();
          obj.displayTime();
     }


}
