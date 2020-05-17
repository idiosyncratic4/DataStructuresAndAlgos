#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long int
inline int getn(){
	int n=0, c=getchar_unlocked();
	while(c < '0' || c > '9') c = getchar_unlocked();
	while(c >= '0' && c <= '9')
		n = (n<<3) + (n<<1) + c - '0', c = getchar_unlocked();
	return n;
}
signed main(){/*
    ios_base::sync_with_stdio(false);
    cin.tie(0);*/
    int t=getn(),n,fs,cs,ans=0;
    while(t--){
        n=getn();
        fs=INT_MAX;
        while(n--){
            cs=getn();
            if(fs>=cs){
                ans++;
                fs=cs;
            }
        }
        cout<<ans<<"\n";
        ans=0;
    }
    return 0;
}
