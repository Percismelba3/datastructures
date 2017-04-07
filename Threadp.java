class Threadp
{
	public static void main(String args[])
	{
		Thread t = Thread.currentThread();
		System.out.println(t);
		t.setName("My_thread");
		System.out.println(t);
	}
}