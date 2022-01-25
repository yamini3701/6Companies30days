//#6Companies30Days Challenge Intuit-2 (Word Search)

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool dfs(vector<vector<char>>& board,vector<vector<bool>> &vis,int i,int j,string str,int n,int m)
   {
       
       if(str.length()<=0)return true;
    //   s[{i,j}]++;
    vis[i][j]=true;
       
       int xarr[]={0,-1,0,1};
       int yarr[]={-1,0,1,0};
       
       for(int k=0;k<4;k++){
           
           int x = i+xarr[k];
           int y=j+yarr[k];
           pair<int,int>p={x,y};
           if(x>=n || x<0 ||y>=m || y<0 || board[x][y]!=str[0])continue;
           
           if(board[x][y]==str[0]){
               if(vis[x][y]==false){
                  if(dfs(board,vis,x,y,str.substr(1),n,m))return true;
               }
           }
       }
       vis[i][j]=false;
       return false;
       
   }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        
        int n=board.size();
        int m =board[0].size();
       vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              
               string str=word;
                if(board[i][j]==str[0]){
                 
                    if(dfs(board,vis,i,j,str.substr(1),n,m))return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends
