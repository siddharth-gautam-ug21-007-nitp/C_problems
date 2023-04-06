// GFG POTD 6-April-2023

// Question : Given an array A of n positive numbers. The task is to find the first index in the array
// such that the sum of elements before it is equal to the sum of elements after it.

// Note:  Array is 1-based indexed.


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        // code here
        int sum = 0;
		for(int i=0;i<N;++i) {
		    sum += A[i];
		}
		int leftSum = 0;
		for(int i=0;i<N;++i) {
		    if(leftSum == sum - A[i]) {
		        return (i + 1);
		    }
		    leftSum += A[i];
		    sum -= A[i];
		}
		return -1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
