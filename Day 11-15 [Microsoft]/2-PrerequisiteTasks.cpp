//#6Companies30Days Challenge Microsoft-2 (Prerequisite Tasks)

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    
    bool iscycle(int s, vector<bool>& visited, vector<bool>& recstack, vector<int> adj[])
    {
        if(visited[s] == false)
        {
            visited[s] = true;
            recstack[s] = true;
            for(auto it : adj[s])
            {
                if(!visited[it] and iscycle(it,visited,recstack,adj))
                {
                    return true;
                }
                else
                {
                    if(recstack[it])
                    {
                        return true;
                    }
                }
            }
        }
        recstack[s] = false;
        return false;
    }
    
	bool isPossible(int N, vector<pair<int, int> >& pre) 
	{
	    vector<int>adj[N];
	    for(int i=0; i<pre.size(); i++)
	    {
	        int u = pre[i].first, v = pre[i].second;
	        adj[u].push_back(v);
	    }
	    vector<bool>visited(N,false);
	    vector<bool>recstack(N,false);
	    for(int i=0; i<N; i++)
	    {
	        if(visited[i] == false)
	        {
	            if(iscycle(i,visited,recstack,adj))
	            {
	                return false;
	            }
	        }
	    }
	    return true;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends
