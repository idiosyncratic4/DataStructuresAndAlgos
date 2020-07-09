
#include<bits/stdc++.h>
using namespace std;
#define Mod 1000000007

int main() {
/* #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
  long long n;
  cin>>n;
  long long result =1 ;
  while(n--)
  {
  	result = (2*(result%Mod))%Mod;
  }
cout<<result;
}
