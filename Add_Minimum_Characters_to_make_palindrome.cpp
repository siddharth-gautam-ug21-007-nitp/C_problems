// QUESTION :   Given a string str, find the minimum characters to be added at front of the string to make it a palindrome.



//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){    
          
          int i=0;
          int j = str.length()-1,trim=j,counter=0;
          
          while(i<j){
              if(str.at(i)==str.at(j)){
                  i++;
                  j--;
              }
              else
              {
                  counter++;
                  i=0;
                  j=--trim;
              }
          }
        return counter;
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
