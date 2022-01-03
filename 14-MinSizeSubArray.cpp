//#6Companies30Days Challenge GoldmanSachs-14 (Minimum size subarray Problem)

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sz = nums.size(), i = 0, currSum = 0, ans = INT_MAX;
        for(int j=0;j<sz;j++) {
            if(currSum < target) currSum += nums[j];
            while(currSum >= target) {
                ans = min(ans, j-i+1);
                currSum -= nums[i++];
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
