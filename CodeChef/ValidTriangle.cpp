#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int A,B,C;
	    cin>>A>>B>>C;
	    if((A+B+C)==180)
	    {
	        cout << "YES" << "\n";
	    }
	    else
	    {
	        cout<<"NO"<<"\n";
	    }
	    t--;
	}
	return 0;
}
