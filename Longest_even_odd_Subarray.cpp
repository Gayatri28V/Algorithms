#include <iostream>
using namespace std;
int oddEven(int arr[],int n)
{
    int res=1,curr=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2 !=0)||(arr[i]%2!=0 && arr[i-1]%2==0))
        {
        curr++;
        res=max(curr,res);
        }
        else
        curr=1;
    }
    return res;
}

int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<oddEven(arr,n);
}
