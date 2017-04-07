interface A
	void show();
	
class B implements A
{
	public static void main(String args[])
	{
		A a = new B()
		a.show();
		int x;
		public void show()
		{
			System.out.println("in B");
		}
		void display()
		{
			System.out.println("a= "+a);
		}
	}
}