#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreater(int arr[],int n)
{
    vector<int> v;
    stack<int> s;
    s.push(arr[n-1]);
    v.push_back(-1);
    for(int i=n-1;i>=0;i--)
    {
        while(s.empty()==false&& s.top()<=arr[i])
        {
            s.pop();
        }
        int res=s.empty()?-1:s.top();
       v.push_back(res);
       s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    nextGreater(arr,n);
     for(int x: nextGreater(arr,n)){
        cout<<x<< " ";   
    }
}
