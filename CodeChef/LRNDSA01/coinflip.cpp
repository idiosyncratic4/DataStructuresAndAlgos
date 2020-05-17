#include <iostream>
#include <cstdio>
using namespace std;

int main() {
 int T, G, N, Q, I;
 scanf("%d", &T);
 while(T--) {
  scanf("%d", &G);
  while(G--) {
   scanf("%d %d %d", &I, &N, &Q);
   if(N%2==0) printf("%d\n", N/2);
   else {
    if(I==Q) printf("%d\n", (N-1)/2);
    else printf("%d\n", (N+1)/2);
   }
  }
 }
 return 0;
}
