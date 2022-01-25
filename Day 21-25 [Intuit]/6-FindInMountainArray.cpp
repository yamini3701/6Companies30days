//#6Companies30Days Challenge Intuit-6 (Find in Mountain Array)

/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    
    int bs1(MountainArray &nums,int l ,int r,int target){
		while(l<=r){
			int mid=(l+r)/2;
			int val=nums.get(mid);
			if(val==target)
				return mid;
			else if(val>target)
				r=mid-1;
			else
				l=mid+1;
		}
		return -1;
	}
    
    int bs2(MountainArray &nums,int l,int r,int target){
		 while(l<=r){
			int mid=(l+r)/2;
			int val=nums.get(mid);
			if(val==target)
				return mid;
			else if(val>target)
				l=mid+1;
			else
				r=mid-1;
		}
		return -1;
	}
    
    int findInMountainArray(int target, MountainArray &nums) {
        int n = nums.length();
        int l=0;
        int r=n-1;
        int peak;
        while(l<=r){
            int m = (l+r)/2;
            int left = INT_MIN, right=INT_MIN;
            if((m-1)>0)
                left = nums.get(m-1);
            int mid = nums.get(m);
            if((m+1)<=n-1)
                right = nums.get(m+1);
            if(left<mid && mid>right){
                peak = m;
                break;
            }
            else if(left<mid && mid<right)
                l = m+1;
            else
                r = m-1;
        }
        
        int index1 = bs1(nums, 0, peak, target);
        int index2 = bs2(nums, peak+1, n-1, target);
        if(index1 != -1 && index2 != -1)
            return index1;
        else if(index1 == -1)
            return index2;
        return index1;
    }
};
