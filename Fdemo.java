class Fdemo
{
	public static void main(String args[])
	{
			try
			{
				throw new NullPointerException ("Hello");
				System.out.println("Jesus loves you");
			}
			catch (NullPointerException e)
			{
				System.out.println(e);
				throw e;
			}
			finally
			{
				System.out.println("Jesus loves you");
			
			}
	}
			
			
}