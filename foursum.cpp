 vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        vector<vector<int>>ans;
        vector<int>dummy;
        int i, j, l,r,n;
        n=nums.size();
        if(n<4)
                return ans;
        sort(nums.begin(),nums.end());
        for(i=0;i<n-3;i++)
        {
            if (i > 0 && nums[i] == nums[i-1])
                continue;
            if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target)
                break;
            if(nums[i]+nums[n-3]+nums[n-2]+nums[n-1]<target)
                continue;
            for(j=i+1;j<n-2;j++)
            {
                if (j > (i+1) && nums[j] == nums[j-1])
                    continue;
                if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target)
                    break;
                if(nums[i]+nums[j]+nums[n-2]+nums[n-1]<target)
                    continue;
                l=j+1;
                r=n-1;
                while(l<r)
                {
                    int s = nums[i]+nums[j]+nums[l]+nums[r];
                    if(s<target)
                        l++;
                    else if(s>target)
                        r--;
                    else
                    {
                        dummy.push_back(nums[i]);
                        dummy.push_back(nums[j]);
                        dummy.push_back(nums[l]);
                        dummy.push_back(nums[r]);
                        ans.push_back(dummy);
                        dummy.clear();

                       do{
                           l++;
                       }while(nums[l]==nums[l-1]&&l<r);
                       do{
                           r--;
                       }while(nums[r]==nums[r+1]&&l<r);
                    }

                }
            }
        }
        return ans;
    }
