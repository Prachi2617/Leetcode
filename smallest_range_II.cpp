class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k)
    {
        int n=nums.size(),maxx,minn;
        int i,ans;
        sort(nums.begin(),nums.end());
        ans=nums[n-1]-nums[0];
        for(i=1;i<n;i++)
        {

                maxx=max(nums[i-1]+k,nums[n-1]-k);
                minn=min(nums[0]+k,nums[i]-k);
                ans=min(ans, maxx-minn);

        }
        return ans;
    }
};
