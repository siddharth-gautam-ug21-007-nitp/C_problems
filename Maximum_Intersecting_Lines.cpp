// QUESTION :
// N horizontal line segments are arranged on the X-axis of a 2D plane.
// The start and end point of each line segment is given in a Nx2 matrix lines[ ][ ].
// Your task is to find the maximum number of intersections possible of any vertical line with the given N line segments.



//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
        
        map<int,int> mp;
        for(auto it:lines)
        {
            // (s,e) freq[s]++,freq[e+1]--
            
            int s=it[0],e=it[1];
            mp[s]++;
            mp[e+1]--;
        }
        int maxi =1;
        int prefixSum = 0;
        for(auto it:mp)
        {
            prefixSum += it.second;
            maxi = max(maxi,prefixSum);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends
