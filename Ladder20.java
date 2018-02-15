import java.util.*;
public class Ladder20
{
	public static void main(String str[])
	{
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		int len = s.length();
		int[] a = new int[(len / 2 + 1)];
		int k = 0;
		for(int i = 0;i < len;i = i + 2)
			a[k++] = s.charAt(i) - '0';
		Arrays.sort(a);
		String res = "";
		for(int i = 0;i < a.length - 1;i++)
			res += a[i] + "+";
		System.out.println(res + a[a.length - 1]);
	}
}
