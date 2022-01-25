//#6Companies30Days Challenge Intuit-12 (Course Schedule II)

class Solution {
public:
    // Time Complexity:- O(V+E)
    // Space Complexity:- O(V)
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses],in(numCourses);
        for(auto& v:prerequisites){
            adj[v[1]].push_back(v[0]); // create a directed edge
            in[v[0]]++; // indegree is incremented
        }
        queue<int> q;
        vector<int> ans; // stores answer
        for(int i=0;i<numCourses;i++){
            if(!in[i])
                q.push(i); // we can start will all those nodes which doesn't have any prerequisites
        }
        while(!q.empty()){
            int v = q.front();q.pop();
            ans.push_back(v);
            for(auto&u :adj[v]){
                if(--in[u]==0) // when indegree of adjacent node becomes zero, means all prerequistes has been satisfied
                    q.push(u);
            }
        }
        if(ans.size()!=numCourses) // if we can't cover all nodes, means there is a cycle in the graph, hence no ordering exists
            ans.clear();
        return ans;
    }
};
