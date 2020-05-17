#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int ele;
	    int j=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ele;
	        if(ele==1)
	        {
	            a[j++]=i;
	        }
	    }
	    int flag=0;
	    for(int i=j-1;i>=1;i--)
	    {
	        if(a[i]-a[i-1]<6)
	        {
	            flag=1;
	            break;
	        }
	        
	    }
	    if(flag==1)
	        cout<<"NO\n";
	   else
	        cout<<"YES\n";
	}
	return 0;
}
