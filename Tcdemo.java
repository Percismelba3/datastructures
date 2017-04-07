class Sample
{
	void fun()
	{
		try
		{
			int a=43;
			int d=0;
			int c=a/d;
		}
		catch(Exception e)
		{	
			System.out.println(e);
		}
	}
}
class Tcdemo
{
	public static void main(String args[])
	{
		try
		{
			Sample s = new Sample();
			s.fun();
		}
		catch (Exception e)
		{
			System.out.println(e);
		}
	}
}