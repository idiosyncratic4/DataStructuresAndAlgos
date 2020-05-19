#include<bits/stdc++.h>
using namespace std;

int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int idx1, idx2;
    for(int i=0, maximum= -1e9-7;i<n;++i){
        int x;
        cin>>x;
        if(x>maximum){
            idx1=i;
            maximum=x;
        }
    }
    for(int i=0, minimum=1e9 + 7;i<m;++i){
        int x;
        cin>>x;
        if(x<minimum){
            idx2=i;
            minimum=x;
        }
    }
    for(int i=0;i<m;++i){
        cout<<idx1<<" "<<i<<"\n";
    }
    for(int i=0;i<n;++i){
        if(i==idx1){
            continue;
        }
        cout<<i<<" "<<idx2<<"\n";
    }
}
