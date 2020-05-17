#include<iostream>
#include<string>
using namespace std;

bool checklapin(string str)
{
  int last=str.size()-1;
  int first=0;
  int hash[256];
  while(first<last)
  {
    int fchar_as=str[first]+0;
    int lchar_as=str[last]+0;
    hash[fchar_as]++;
    hash[lchar_as]--;
    first++;
    last--;
  }
  for(int i=0;i<256;i++)
    if(hash[i]!=0)
      return false;
  return true;
}

int main()
{
  int t;
  scanf("%d",&t);
  string str;
  while(t--)
  {
    cin>>str;
    bool islapin=checklapin(str);
    if(islapin)
    {
      printf("YES\n");
     }
     else
     {
      printf("NO\n");
      }
   }
   return 0;
}
