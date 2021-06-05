import java.util.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-- > 0)
		    {
		    double b = scan.nextDouble(), c = scan.nextDouble();
		    double LL = 0.0, HL = Math.PI/2, x = (HL + LL)/2, LHS = (2*x + b) * Math.tan(x), RHS = (x*x + b*x + c);
		    while(Math.abs(LHS - RHS) > Math.pow(10, -6))
		    {
		        if(LHS >= RHS)
		        {
		            HL = x;
		        }
		        else
		        {
		            LL = x;
		        }
		        x = (HL + LL)/2;
		        LHS = (2*x + b) * Math.tan(x);
		        RHS = (x*x + b*x + c);
		    }
		    double Min = (x*x + b*x + c)/Math.sin(x);
		    System.out.println(Min);
		}
        scan.close();
	}
}