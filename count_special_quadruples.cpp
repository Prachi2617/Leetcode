class Solution {
public:
    int countQuadruplets(vector<int>& nums)
    {
        int i,j,k,l,ans=0,n;
        n=nums.size();
        map<int,int>mp;
        //sort(nums.begin(),nums.end());
        for(i=(n-1);i>=0;i--)
        {
            for(j=i-1;j>=0;j--)
            {
               for(k=j-1;k>=0;k--)
               {
                   int s=nums[i]+nums[j]+nums[k];
                   if(mp[s])
                   {
                       ans=ans+mp[s];
                   }
               }
            }
            mp[nums[i]]++;
        }
        return ans;
    }
};
