class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums)
    {
        int i, j, ans=1,curr=1;
        j=0;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                curr++;
            }
            else
            {
                curr=1;

            }
            if(curr>ans)
                ans=curr;
        }
        return ans;
    }
};
