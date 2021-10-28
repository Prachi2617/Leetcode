//O(log(n))

class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int lo=0,hi,n;
        n=nums.size();
        hi=n-1;
        //below is to find the smallest element and the no. of rotation
        while(lo<hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid;
        }
        int rot=lo;// no. of rotation
        lo=0;
        hi=n-1;
        // The usual binary search and accounting for rotation.
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            int realmid=(mid+rot)%n;// it's the actual mid before the rotation
            if(nums[realmid]==target)return realmid;
            if(nums[realmid]<target)lo=mid+1;
            else hi=mid-1;
        }
        return -1;
    }
};
