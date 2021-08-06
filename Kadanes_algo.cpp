#include<iostream>
using namespace std;
class solution
{
public:
    //find maximum subarray sum
    int maxSubarraySum(int arr[], int n){
     int maxs=arr[0],res=arr[0];
    for(int i=1;i<n;i++)
    {
        maxs=max(maxs+arr[i],arr[i]);
        res=max(res,maxs);
    }
    return res;
     }
};
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 cin>>arr[n];
 solution obj;
 cout<<"maximum sum of subarray is :"<<obj.maxSubarraySum( arr, n);

}
