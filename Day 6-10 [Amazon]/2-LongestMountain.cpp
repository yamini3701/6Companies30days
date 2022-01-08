//#6Companies30Days Challenge Amazon-2 (LongestMountain)

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans = 0;
        int n = arr.size();
        
        for(int i = 1; i <= n-2;) {
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                int j = i;
                int count = 1; 
                while(j >=1 && arr[j] > arr[j-1]) {
                    j--;
                    count++;
                }
                while(i <= n-2 && arr[i] > arr[i+1]) {
                    i++;
                    count++;
                }
                ans = max(ans, count);
            } else {
                i++;
            }
        }
        return ans;
    }
};
