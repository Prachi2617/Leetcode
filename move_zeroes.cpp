class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int h=nums.size();
        int j=0;
        for(int i=0;i<h;i++)
        {
            if(nums[i]!=0)
                nums[j++]=nums[i];
        }
        for(;j<h;j++)
        {
            nums[j]=0;
        }
    }
};
