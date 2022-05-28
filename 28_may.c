
// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int shortestPath( int x, int y){
        // code here
        if(x == y) return 0;
        int count = 0;
        while(x != y)
        {
            if(x > y and x != 1)
            {
                 x = x/2;
                 count = count + 1;
                 if(y == x) return count;
            }
            if(y > x and y != 1)
            {
                y= y/2;
                count = count + 1;
                if(y == x) return count;
            }

        }

          return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<< ob.shortestPath(x,y) << endl;
    }
    return 0;
}   // } Driver Code Ends
