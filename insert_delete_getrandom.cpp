#include<bits/stdc++.h>
using namespace std;
class Randomset
{
    vector<int>lists;
    map<int,int>mp;
    Randomset()
    {

    }
    bool insertt(int val)
    {
        if(mp.find(val)==mp.end())
        {
            lists.push_back(val);
            mp[val]=lists.size()-1;
            return true;
        }
        else
            return false;
    }
    bool deletee()
    {
        if(mp.find(val)!=mp.end())
        {
            int last=lists.back();
            /*int index1=mp[last];
            int index2=mp[val];
            mp[last]=mp[val];
            swap(lists[index1],lists[index2]);*/
            mp[last]=mp[val];
            lists[mp[val]]=last;
            lists.pop_back();
            mp.erase(val);
            return true;
        }
        else
            return false;
    }
    int getrandom()
    {
        int index=rand()%lists.size();
        return lists[index];
    }
};
