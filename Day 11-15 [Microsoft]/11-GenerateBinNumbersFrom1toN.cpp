//#6Companies30Days Challenge Microsoft-11 (Generate Binary Numbers from 1 to N)

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
    vector<string>ans;
    string s="";
	// Your code here
	for(int i=1;i<=N;i++){
	    int a=i;
	    while(a){
	        int b= a%2;
	        s=to_string(b)+s; //b is being appended at the front of ans string
	        a=a/2;
	    }
	    ans.push_back(s);
	    s="";
	}
	return ans;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
