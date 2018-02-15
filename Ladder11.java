import java.util.Scanner;
public class Ladder11
{
	public static void main(String s[])
	{
		Scanner sc = new Scanner(System.in);
		String s1 = sc.next();
		String s2 = sc.next();
		String res = "";
		for(int i = 0;i < s1.length();i++)
			res = res + ((s1.charAt(i) - '0') ^ (s2.charAt(i) - '0')); 
		System.out.println(res);
	}
}
