import java.io.*;
class CopySample
{
	public static void main(String args[])
	{
		try
		{
			FileInputStream fin = new FileInputStream("abc.txt");
			int c=fin.read();
			FileOutputStream fout = new FileOutputStream("ghi.txt");
			while(c!=-1)
			{
				fout.write(c);
				c=fin.read();
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}
		