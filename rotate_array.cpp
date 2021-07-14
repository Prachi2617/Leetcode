class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
       // reverse last k numbers;
        int i,n,j;
        n=nums.size();
        k=k%n;
        j=nums.size()-1;
        for(i=n-k;i<(n-k+n)/2;i++)
        {
            swap(nums[i],nums[j--]);
        }
        // reverse first nums.size()-k numbers;
        j=n-k-1;
        for(i=0;i<(n-k)/2;i++)
        {
            swap(nums[i],nums[j--]);
        }
        //reverse whole array
         j=nums.size()-1;
        for(i=0;i<n/2;i++)
        {
            swap(nums[i],nums[j--]);
        }
    }
};
