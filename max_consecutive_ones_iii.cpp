//Time Complexity- O(n)
//Space -O(1)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k)
    {
        int cnt0=0;
        int st=0,i;
        int ans=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                cnt0++;
            while(cnt0>k)
            {
                if(nums[st]==0)
                    cnt0--;
                st++;
            }
            ans=max(ans,i-st+1);
        }
        return ans;
    }
};
