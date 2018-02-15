import java.util.Scanner;
public class Ladder58
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String s,r,t;
		r = "NO\n";
		t = "hello";
		s = sc.next();
		for(int i = 0,j = 0;i < s.length();i++)
		{
			if(s.charAt(i) == t.charAt(j))
			{
				if(++j == 5)
				{
					r = "YES\n";
					break;
				}
			}
		}
		System.out.println(r);
	}
}
