class Ttime
{
	public static void main(String args[])
	{
		Thread t = Thread.currentThread();
		System.out.println(t);
		t.setName("My_thread");
		System.out.println(t);
		int i;
		for(i=0;i<10;i++)

		{
			System.out.println(i);
			sleep(1000);
		}

	}
}