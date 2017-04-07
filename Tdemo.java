class Tdemo
{
	public static void main(String args[])
	{
		
			try
			{
				throw new NullPointerException ("Hello");
			}
			catch (NullPointerException e)
			{
				System.out.println(e);
				throw e;
			}
	}
}