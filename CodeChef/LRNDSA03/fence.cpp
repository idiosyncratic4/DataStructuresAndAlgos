#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t,n,m,i,j,k,l,r,c;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        vector <long int> v;
        for(i=0;i<k;i++){
            cin>>r>>c;
            v.push_back((r-1)*m+c);
        }
        sort(v.begin(),v.end());
        l=v.size();
        j=k*4;
        bool x,y;
        for(i=0;i<l-1;i++){
             x=binary_search(v.begin(),v.end(),v[i]+1);
             y=binary_search(v.begin(),v.end(),v[i]+m);
            if(y==true)j-=2;
            if((x==true)&&(v[i]%m))j-=2;
            
        }
        cout<<j<<"\n";
    }
    return 0;
}
