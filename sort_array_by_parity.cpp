class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums)
    {
        int i,j=0,h;
        h=nums.size()-1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[j]%2==0)
                j++;
            else if((nums[j]%2)!=0)
                swap(nums[j],nums[h--]);
        }
        return nums;
    }
};
