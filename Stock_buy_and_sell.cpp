/*The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.
Note: There may be multiple possible solutions. Return any one of them. Any correct solution will result in an output of 1, 
whereas wrong solutions will result in an output of 0.
N = 5
A[] = {4,2,2,2,4}
Output:
1
Asked in many companies .*/

#include <iostream>
#include <cmath>
using namespace std;


int maxProfit(int price[], int n)
{
	int profit = 0;

	for(int i = 1; i < n; i++)
	{
		if(price[i] > price[i - 1])
			profit += price[i] - price[i -1];
	}

	return profit;

}


int main() {
	
      int n;
      cin>>n;
      int price[n];
      for(int i=0;i<n;i++)
      cin>>price[i];
      cout<<maxProfit(price,n);
    
}
