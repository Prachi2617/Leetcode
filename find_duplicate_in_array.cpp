class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
      int n= nums.size();
      map<int,bool>mp;
      for(int i=0;i<n;i++)
      {
          if(mp[nums[i]])
              return nums[i];
          else
              mp[nums[i]]=true;
      }
      return 0;
    }
};
