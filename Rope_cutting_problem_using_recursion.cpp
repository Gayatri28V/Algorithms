/*Given the length of rope n and and the length of pieces a,b,c,we have to finf the maximum pieces in which we can cut the rope.*/
#include<iostream>
using namespace std;

int maxCuts(int n,int a,int b,int c)
{
if(n==0)
  return 0;
  if(n<= -1)
    return -1;
  int res;
  res=max(maxCuts(n-a,a,b,c),maxCuts(n-b,a,b,c),maxCuts(n-c,a,b,c));
  if(res=-1)
    return -1;
 
    return res+1;
}
int main()
{
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  cout<<maxCuts(n,a,b,c)
  }
//Time complexity O(3^n)
