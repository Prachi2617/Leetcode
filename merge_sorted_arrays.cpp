class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int ml,nl,a;
        ml=m-1;
        nl=n-1;
        a=m+n-1;
        while(ml>=0 && nl>=0)
        {
            if(nums1[ml]>nums2[nl])
                nums1[a--]=nums1[ml--];
            else
                nums1[a--]=nums2[nl--];
        }
        while(nl>=0)
        {
             nums1[a--]=nums2[nl--];
        }
    }
};
