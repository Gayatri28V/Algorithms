//Given an array and a range [lowVal, highVal], partition the array around the range such that array is divided in three parts. 
//1) All elements smaller than lowVal come first. 
//2) All elements in range lowVal to highVVal come next. 
//3) All elements greater than highVVal appear in the end. 
//The individual elements of three sets can appear in any order.
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Partition
{
  public:
  void threePartition(int arr[],int n,int low,int high)
  {
    int mid=0,end=n-1;
    
    for (int i=0; i<=end;)
    {

        if (arr[i] < low)
            swap(arr[i++], arr[mid++]);
 
        else if (arr[i] > high)
            swap(arr[i], arr[end--]);
 
        else
            i++;
    }
    }
  
};
int main()
{
    Partition obj;
  int n,low,high;
  cin>>n>>low>>high;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
 obj.threePartition(arr,n,low,high); 
 
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
