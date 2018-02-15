import java.util.Scanner;
public class Ladder6
{
	public static void main(String str[])
	{
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		int u= 0,l = 0;
		for(int i = 0;i < s.length();i++)
		{
			if(s.charAt(i) >= 'A' && s.charAt(i) <= 'Z')
				u++;
			else
				l++;
		}
		String res;
		if(u > l)
			res = s.toUpperCase();
		else
			res = s.toLowerCase();
		System.out.println(res);
	}
}
