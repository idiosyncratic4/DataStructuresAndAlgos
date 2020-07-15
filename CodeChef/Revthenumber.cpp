#include<bits/stdc++.h>
using namespace std;
int main()
{
	/* code */
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	long long t;
	cin>>t;
	while(t>0)
	{
		string n;
		cin>>n;
		for (int i=n.length()-1; i>=0; i--){ 
            cout << n[i];  
		}
		cout<<"/n";
		t--;
	}
	return 0;
}
