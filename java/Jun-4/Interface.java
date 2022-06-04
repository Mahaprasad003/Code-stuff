//Demonstrate use of abstract class
interface class Figure
{
	// double d1;
	// double d2;

	// Figure( double a, double b)
	// {
	// 	d1=a;
	// 	d2=b;
	// }
	double pi = 3.14;
	interface double area();
}

class Rectangle extends Figure
{
	Rectangle(double a,double b)
	{
		super(a,b);
	}

	double area()
	{
		System.out.println("The area of rectangle is ");
		return d1*d2;
	}
}

class Triangle extends Figure
{
	Triangle(double a,double b)
	{
		super(a,b);
	}

	double area()
	{
		System.out.println("The area of triangle is ");
		return d1*d2/2;
	}
}

class DemoAbstract
{
	public static void main(String args[])
	{
		Rectangle r=new Rectangle(8,4);
		Triangle t=new Triangle(6,8);

		Figure figref;

		figref=r;
		System.out.println("Area is "+figref.area());

		figref=t;
		System.out.println("Area is "+figref.area());
	}
}
