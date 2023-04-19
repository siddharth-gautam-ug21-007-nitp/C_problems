// WIFI RANGE GFG POTD



//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
        int curr = 0;
        for(int i = 0; i < S.size(); i++) {
            if(S[i] == '1') {
                curr = X;
            }
            else if(curr > 0) {
                curr--;
                S[i] = 'x';
            }
        }
        curr = 0;
        for(int i = S.size() - 1; i >= 0; i--) {
            if(S[i] == '1') {
                curr = X;
            }
            else if(curr > 0) {
                curr--;
                S[i] = 'x';
            }
            if(S[i] != '1' && S[i] != 'x') return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends
