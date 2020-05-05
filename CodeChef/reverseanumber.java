/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int n,a;
		n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
		    a=sc.nextInt();
		    reverse(a);
		    
		}
	}
	public static void reverse(int n)
	{
	    int rev=0,rem;
	    while(n>0)
	    {
	        rem=n%10;
	        rev=(rev*10)+rem;
	        n=n/10;
	    }
	    System.out.println(rev);
	}
}
