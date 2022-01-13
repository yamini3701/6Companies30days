//#6Companies30Days Challenge Microsoft-7 (Unit Area of Largest Region of 1s)

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    
    int countArea(vector<vector<int>>& grid, int x, int y) {
        if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size()) return 0;
        if (!grid[x][y]) return 0;
        grid[x][y] = 0;
        return 1 + countArea(grid, x - 1, y) 
                 + countArea(grid, x + 1, y)
                 + countArea(grid, x, y - 1)
                 + countArea(grid, x, y + 1)
                 + countArea(grid, x-1,y-1)
                 + countArea(grid, x+1, y + 1)
                 + countArea(grid, x+1,y-1)
                 + countArea(grid, x-1,y+1);
                 
    }
    int findMaxArea(vector<vector<int>>& grid) {
        int area = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j])
                    area = std::max(countArea(grid, i, j), area);
            }
        }
        
        return area;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
