#include <bits/stdc++.h>
using namespace std;

void previousGreater(int arr[],int n)
{
  stack<int>s;
  s.push(arr[0]);
  cout<<-1<<" ";
  for(int i=0;i<n;i++)
  {
      while(s.empty()==false&& s.top()<=arr[i])
      {
          s.pop();
      }
      int pg=s.empty()?-1:s.top();
        cout<<pg<<" ";
        s.push(arr[i]);
  }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    previousGreater(arr,n);
    
}
