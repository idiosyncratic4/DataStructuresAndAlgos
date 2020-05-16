#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the hackerlandRadioTransmitters function below.
int main(){
    int n;
    int k;
    cin >> n >> k;
    
    vector <int> x(n);
    for (int i=0;i<n;i++) cin >> x[i];
    sort(x.begin(),x.end());
    
    int count=0;
    int leftMostHouse=x[0];
    vector <int>::iterator it;
    
    for (int i=0;i<n;i++) {
      if ((x[i]-leftMostHouse)<=k) continue; // find rightmost house
      count++; // found house x[i-1] to put xmitter on
        
      // find leftmost house outside covered range x[i-1]+k
      it=upper_bound(x.begin(),x.end(),x[i-1]+k);
      if (it==x.end()) break;
      i=it-x.begin();
      leftMostHouse=x[i]; 
    }
    if (it!=x.end()) count++; // take care of last loc to put xmitter
    
    cout << count;
    return 0;
}
