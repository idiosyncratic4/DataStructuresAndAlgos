#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t=0;
    cin>>t;
    while(t!=0){
	int num, rev=0, rem;
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	cout<<rev;
	t--;
    }
}
