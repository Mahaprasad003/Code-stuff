// Create a class complex with two instance variables. Real and imaginary.
// Define a method input to set the values of real and imaginary.
// Define a method display to display the complex number.

import java.util.*;

class Complex
{
     double real;
     double imaginary;

     public void inputComplex(double a, double b)
     {
          real = a;
          imaginary = b;
     }
     public void displayComplex()
     {
          System.out.println("Result is: "+real + " + i" + imaginary);

     }

     public static void main(String[] args) {
          Complex obj = new Complex();
          obj.inputComplex(10.2,15.3);
          obj.displayComplex();
     }
}
