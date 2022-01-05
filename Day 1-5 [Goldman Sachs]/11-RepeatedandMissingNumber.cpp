//#6Companies30Days Challenge GoldmanSachs-11 (RepeatedAndMissingNumber)

class Solution{
public:
    vector<int> find_missing_repeating(vector<int> arr) 
	{
        int n = arr.size() + 1;
        vector<int> substitute(n,0);
        vector<int> ans;
        for(int i=0; i<x;i++)
		{
            substitute[arr[i]]++;
        }
        for(int i=0; i<n; i++)
		{
            if(substitute[i]==0 || substitute[i]>1)
			{
                ans.push_back(i);
            }
        }
        return ans;
    }
};
