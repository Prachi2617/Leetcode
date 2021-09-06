class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        set<int>s;
        int i,ans=0,j,cnt=0;
        int N=nums.size();
        for(i=0;i<N;i++)
        {
            s.insert(nums[i]);
        }
        for(i=0;i<N;i++)
        {
            cnt=0;
            if(s.find(nums[i]-1)==s.end())// if it's the starting number
            {
                j=nums[i];
                while(s.find(j)!=s.end())
                    {
                        j++;
                        cnt++;
                    }
                    ans=max(ans,cnt);
            }
        }
        return ans;
    }
};
