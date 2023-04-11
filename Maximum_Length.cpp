// QUESTION :
// Given the maximum occurrences of a, b, and c in a string. Your task is to make the string containing only a, b, and c 
// such that no three consecutive characters are the same. 
// If the resultant string equals to a+b+c, return the length (a+b+c) otherwise -1.





//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        
        if((a>2*(b+c)+2) || (b>2*(a+c)+2) || (c>2*(b+a)+2)) return -1;
        return (a+b+c);
        
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
