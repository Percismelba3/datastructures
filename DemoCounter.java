class Counter extends Thread
{
	String name;
	Counter(String nam)
	{
		super(nam);
		name=nam;
		
		start();
	}
	public void run()
	{
		try
		{
			if( name == "one")
			{
				for(int i=1;i<5;i++)
				{
					System.out.println("In increasinf order: " +i);
					Thread.sleep(1000);
				}
			}
			else
			{
				for(int i=5;i>=1;i--)
				{
					System.out.println("In decresing order: " +i);
					Thread.sleep(500);
				}
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}

class DemoCounter
{
	public static void main(String args[])
	{
		Thread t1=new Counter("one");
		Thread t2=new Counter("two");
		try
		{
			t1.join();
			t2.join();
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}