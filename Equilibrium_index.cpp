/*Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes
Algotithm::
1) Initialize leftsum  as 0
2) Get the total sum of the array as sum
3) Iterate through the array and for each index i, do following.
    a)  Update sum to get the right sum.  
           sum = sum - arr[i] 
       // sum is now right sum
    b) If leftsum is equal to sum, then return current index. 
       // update leftsum for next iteration.
    c) leftsum = leftsum + arr[i]
4) return -1 
// If we come out of loop without returning then
// there is no equilibrium index 
Time complexity::O(n);
*/
#include <iostream>
using namespace std;
int equilibrium_point(int arr[],int n)
{
    int sum=0;
    int left_sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    for(int i=0;i<n;i++)
    {
        sum=sum-arr[i];//right sum for index i
        if(left_sum==sum)
        return i;
        left_sum+=arr[i];
    }
    return -1;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<equilibrium_point(arr,n);
}

