#include<bits/stdc++.h>
using namespace std;

int main()
{
	//n! input
// 	#ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt", "w", stdout);
// #endif
	long long n;
	cin>>n;
	long long int zeroes=0,k=5;
	//20 2 5 10 12 15 20==4
	//30 
	if(n<k)
	{
		cout<<0;
		return 0;
	}
	else if(n==k){ cout<<1; return 0;}
	while(n>k)
	{
		zeroes+=(n/k);
		k=k*5;
	}
	cout<<zeroes;
}
