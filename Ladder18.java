import java.util.Scanner;
public class Ladder18
{
	public static void main(String arg[])
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int res = 0;
		int x = sc.nextInt();
		int min = x;
		int max = x;
		n--;
		while(n-- > 0)
		{
			x = sc.nextInt();
			if(x < min)
			{
				min = x;
				res++;
			}
			if(x > max)
			{
				max = x;
				res++;
			}
		}
		System.out.println(res);
	}
}
