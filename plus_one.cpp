class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        vector<int>ans;
        int i,n;
        n=digits.size();
        for(i=n-1;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                digits[i]+=1;
                break;
            }
            else
            {
                digits[i]=0;
            }
        }
        if(i==(-1))
        {
            ans.push_back(1);
        }
        for(i=0;i<n;i++)
        {
            ans.push_back(digits[i]);
        }
        return ans;
    }
};
