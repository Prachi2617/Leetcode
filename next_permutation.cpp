/* step1: find element which is less than immediate next element from the last of array(arr[i-1]<arr[i])
    store its index to id1=i-1;
   step2: then from the last find first element greater than arr[id1] and then swap that element from id1 element
   step3: reverse element from id1+1 to last element.
   edge case if array size is less than 2 so return (no change)
   edge case: if step1 is not fulfilled we cannot find element smaller than the immediate next then directly reverse the element
*/
class Solution {
public:

    void nextPermutation(vector<int>& nums)
    {
        if(nums.size()<=1)
            return ;
        int i, n, ind1, ind2;
        n=nums.size();
        int flag=0;
        for(i=n-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                ind1=i-1;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            //reverse(nums,0,n-1);
            for(i=0;i<n/2;i++)
            {
                swap(nums[i],nums[n-1-i]);
            }
        }
        else
        {
            for(i=n-1;i>ind1;i--)
            {
                if(nums[i]>nums[ind1])
                {
                    swap(nums[ind1],nums[i]);
                    break;
                }
            }
           // reverse(nums,ind1+1, n-1);
            int b=nums.size()-1;
            for(i=ind1+1;i<=(ind1+1+b)/2;i++)
            {
                swap(nums[i],nums[ind1+1+b-i]);

            }
        }
    }
};
