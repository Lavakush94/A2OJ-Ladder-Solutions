import java.util.*;
public class Ladder23
{
	public static void main(String[] arg)
	{
		Scanner sc = new Scanner(System.in);
		String s1 = sc.next();
		String s2 = sc.next();
		String s3 = sc.next();
		s1 = s1 + s2;
		char[] a = s1.toCharArray();
		char[] b = s3.toCharArray();
		Arrays.sort(a);
		Arrays.sort(b);
		s1 = new String(a);
		s3 = new String(b);
		if(s1.equals(s3))
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}
