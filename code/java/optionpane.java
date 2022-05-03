import javax.swing.JOptionPane;

class IDBox{
     public static void main(String[] args) {
          String m = JOptionPane.showInputDialog(
          "Enter a number",
          "n"
          );
          int a = Integer.parseInt(m);
          int b = a*a*a;
          // System.out.println(m);
          JOptionPane.showMessageDialog(null,b);
     }

}
