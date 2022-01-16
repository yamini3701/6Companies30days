//#6Companies30Days Challenge Adobe-10 (Winner Of An Election)

// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {   
        vector<string> ans;
        map<string,int> map;
        string str="";
        int max=0;
        
        for(int i=0 ; i<n ; i++){
            map[arr[i]]++;
        }
        
        for(auto i:map){
            if(i.second > max){
                str=i.first;
                max=i.second;
            }
        }
        ans.push_back(str);
        ans.push_back(to_string(max));
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends
