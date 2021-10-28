class Solution {
public:
    int findMin(vector<int>& nums)
    {
         int ans,i=0, last;
         last=nums.size()-1;
         while(i<last)
         {
            if(nums[last]>nums[i])
                return  nums[i];
            int mid= (last+i)/2;
            if(nums[mid]>=nums[i])
            {
                i=mid+1;
            }
            else
            {
                last=mid;
            }
         }
         return nums[i];
    }
};
.............................................................................
 below function can be used as well 
while(lo<hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid;
        }
         return nums[lo];

