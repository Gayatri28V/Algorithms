//this is an algotithm to segregate 0,1,and 2 in an array
#include<iostream>
using nammespace std;
void sortThree(int arr[],int n)
{
  int low=0,mid=0,high=n-1;
  while(mid<=high)
  {
    if(arr[mid]==0)
    {
      swap(arr[low],arr[mid]);
      low++;
      mid++;
    }
    else if(arr[mid]==1)
            mid++;
    else
    {
      swap(arr[mid],arr[high]);
      high--;
    }
  }
  cout<<arr[n];
}
int main()
{ 
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  sortThree( arr, n);
}
//Time complexity of this is theta(N) and space complexitity in theta(1)
