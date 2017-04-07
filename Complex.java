class Complex
{
	int real,img;
	Complex(int r,int i)
	{
		real=r;
		img=i;
	}
	void add(Complex B)
	{
		int r,i;
		r=real+B.real;
		i=img+B.img;
		System.out.println("The sum is : " +r+ "+" +i+ "i");
	}
	void subtract(Complex B)
	{
		int r,i;
		r=real-B.real;
		i=img-B.img;
		System.out.println("The diff is : " +r+ "-" +i+ "i" );
	}
	void mul(Complex B)	
	{
		int r,i;
		r=(real*B.real)+(img*B.img);
		i=(real*B.img)+(img*B.real);
		System.out.println("Product  is " +r+ " +" +r + "i");
	}
}
class ComplexDemo
{	public static void main(String args[])
	{
		Complex B=new Complex(2,5);
		Complex A=new Complex(6,7);
		B.add(A);
		B.subtract(A);
		B.mul(A);
	}		
}			