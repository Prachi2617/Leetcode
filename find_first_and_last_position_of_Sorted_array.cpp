class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int>ans;
        int i=-1,first=-1,second=-1,n,mid,flag=0;
        n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
             mid=l+(r-l)/2;
             if(nums[mid]==target)
             {
                flag=1;
                i=mid;
                break;
             }
            else if(target<nums[mid])
            {
                r=mid-1;
            }
            else if(target>nums[mid])
            {
                l=mid+1;
            }
            else
                break;
        }
        if(flag==1)
        {
            int left=i;
            while(left>=0 &&nums[left]==target)
            {
                left--;
            }
            ans.push_back(left+1);
            int right=i;
            while(right<n && nums[right]==target)
            {
                right++;
            }
            ans.push_back(right-1);
            return ans;
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};
