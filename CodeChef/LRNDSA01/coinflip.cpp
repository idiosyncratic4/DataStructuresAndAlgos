#include <iostream>
#include <cstdio>
using namespace std;

int main() {
 int t, g, n, q, i;
 scanf("%d", &t);
 while(t--) {
  scanf("%d", &g);
  while(g--) {
   scanf("%d %d %d", &i, &n, &q);
   if(n%2==0) printf("%d\n", n/2);
   else {
    if(i==q) printf("%d\n", (n-1)/2);
    else printf("%d\n", (n+1)/2);
   }
  }
 }
 return 0;
}
