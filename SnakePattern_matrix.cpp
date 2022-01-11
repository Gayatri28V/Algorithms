#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;
class snakePattern
{
 public:
 void snake(vector<vector<int> > & matrix ,int n)
 {
     for(int i=0;i<n;i++)
     {
         if(i%2==0)
         {
             for(int j=0;j<n;j++)
             cout<<matrix[i][j]<<" ";
         }
        else
        {
            for(int j=n-1;j>=0;j--)
            cout<<matrix[i][j]<<" ";
        }
     }
 }
 
};
int main()
{
    int n;
    cin>>n;
    vector<vector<int> > matrix(n);
    for(int i=0;i<n;i++)
    {
        matrix[n].assign(n,0);
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    snakePattern obj;
    obj.snake(matrix,n);
}
