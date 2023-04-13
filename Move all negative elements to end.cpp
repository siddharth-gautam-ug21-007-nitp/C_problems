// DSA SHEET PROBLEM 5


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int j=0,k=0;
        
        // firstly we store all negative numbers into another array
        // and shift all the positive numbers leftward and later on merged the other array from right
        int neg[n];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0) neg[k++] = arr[i];
            else arr[j++] = arr[i];
        }
        for(int i=0;j<n;j++,i++)
            arr[j] = neg[i];
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends
