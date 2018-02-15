import java.util.Scanner;
public class Ladder49
{
	public static void main(String []args)
	{
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		String[] str = s.split("WUB");
		for(String r : str)
		{
			if(r.length() > 0)
				System.out.print(r + " ");
		}
		System.out.println();
	}
}
