class Callee
{
	void call(String msg)
	{
		try
		{
			System.out.println("[" +msg);
			Thread.sleep(500);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		System.out.println("]");
	}
}

class Caller implements Runnable
{
	Callee target;
	Thread t;
	String message;
	Caller(Callee t,String msg)
	{
		t=new Thread(this);
		target=t;
		message=msg;
		t.start();
	}
	public void run()
	{
		target.call(message);
	}
}
class ThreadSync
{
	public static void main(String args[])
	{
		Callee t=new Callee();
		Caller c1=new Caller(t,"hello");
		Caller c2=new Caller(t,"Synchronous");
		Caller c3=new Caller(t,"world");
		
		try
		{
			c1.t.join();
			c2.t.join();
			c3.t.join();
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}