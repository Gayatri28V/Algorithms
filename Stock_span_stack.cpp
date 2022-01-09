

#include<bits/stdc++.h>
using namespace std;
void printSpan(int arr[],int n)
{
 stack<int> s;
 s.push(0);
 cout<<1<<" ";
for(int i=1;i<n;i++){
 while(s.empty()==false&&arr[s.top()]<=arr[i])
 {
     s.pop();
 }
 int span;
 if(s.empty()==true)
   span=i+1;
   else
   span=i-s.top();
   cout<<span<<" ";
   s.push(i);
}
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    printSpan(arr,n);
}
