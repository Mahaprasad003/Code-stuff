//Demonstrate use of abstract class
import java.util.*;
import java.lang.*;
interface Figure
{
	// double d1;
	// double d2;

	// Figure( double a, double b)
	// {
	// 	d1=a;
	// 	d2=b;
	// }
	double pi = 3.14;
	double area();
	double perimeter();
}

interface Shape extends Figure{

}

class Rectangle implements Figure
{
	double dim1, dim2;
	public Rectangle(double a,double b)
	{
		dim1 = a; dim2 = b;
	}

	public double area()
	{
		System.out.println("The area of rectangle is ");
		return dim1*dim2;
	}
	public double perimeter()
	{
		return 2*(dim1+dim2);
	}
}

class Triangle implements Figure
{
	double dim1, dim2, dim3;
	Triangle(double a,double b, double c)
	{
		dim1 = a; dim2 = b; dim3 = c;
	}

	public double area()
	{
		System.out.println("The area of triangle is ");
		double s = (dim1+dim2+dim3)/2;
		return Math.sqrt(s*(s-dim1)*(s-dim2)*(s-dim3));
	}
	public double perimeter()
	{
		return dim1+dim2+dim3;
	}
}

class Circle implements Shape
{
	double dim1;
	Circle(double a)
	{
		dim1 = a;
	}

	public double area()
	{
		return pi*dim1*dim1;
	}

	public double perimeter()
	{
		return 2*pi*dim1;
	}
}

class DemoAbstractt
{
	public static void main(String args[])
	{
		Rectangle r=new Rectangle(8.0,4.0);
		Triangle t=new Triangle(6.2,8.5,5.0);
		Circle c = new Circle(2.0);

		Figure figref;

		figref=r;
		System.out.println("Area is "+figref.area());

		figref=t;
		System.out.println("Area of triangle is:  "+figref.area());
		figref = c;
		System.out.println("Area of circle:  " + figref.area());
	}
}
