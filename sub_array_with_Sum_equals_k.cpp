//time- O(n)
//space- O(n)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        map<int,int>mp;
        mp[0]=1;
        int i, ans, sum=0;
        ans=0;
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            ans+=mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};
