/*another way to make a min heap is multiply all array element with (-1) and then create max heap , while fetching elements
from the top multiply it again with -1
*/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        int ans,i;
        //priority_queue<int>pq;
       priority_queue <int, vector<int>, greater<int> > pq;// to make it min heap 3rd parameter is comparison
        for(i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
            if(pq.size()>k)
                pq.pop();
        }
        ans=pq.top();
        return ans;
    }
};
