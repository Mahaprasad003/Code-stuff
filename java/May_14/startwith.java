import java.util.*;

class test
{
     public static void main(String[] args) {
          String s = "Mahaprasad is great. Mahaprasad is nice. Mahaprasad is god";
          // System.out.println(s.startsWith("Sa"));
          // System.out.println(s.endsWith("n"));

          // System.out.println(s.charAt(0));
          // System.out.println(s.charAt(3));

          // System.out.println("Mahaprasad".length());
          // int a = 10;
          // String b = String.valueOf(a);
          // System.out.println(b+10);
          String replaceString = s.replace("Mahaprasad", "God");
          System.out.println(replaceString);
          System.out.println(s);


     }

}
