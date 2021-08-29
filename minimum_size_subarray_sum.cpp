class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int i,j=0,ans,cnt=0,n,sum=0;
        n=nums.size();
        ans=n+1;
        for(i=0;i<n;i++)
        {
            sum=sum+nums[i];
            cnt++;
            while(sum>=target)
            {
                ans=min(ans,cnt);
                sum=sum-nums[j];
                cnt--;
                j++;
            }
        }
        if(ans==(n+1))
            return 0;
        else

        return ans;
    }
};
