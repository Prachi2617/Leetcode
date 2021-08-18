class LRUCache {
public:
    list<pair<int,int>>lists;
    unordered_map<int,list<pair<int,int>>::iterator >mp;
    int cap;
    LRUCache()
    {

    }
    LRUCache(int capacity)
    {
        cap=capacity;
    }

    int get(int key)
    {
        if(mp.find(key)==mp.end())
            return -1;
        else
        {
            int val=(*mp[key]).second;
            lists.erase(mp[key]);
            lists.push_front({key,val});
            mp[key]=lists.begin();
            return (*mp[key]).second;
        }
    }

    void put(int key, int value)
    {
        if(mp.find(key)==mp.end())
        {
            if(lists.size()==cap)
            {
                int last=lists.back().first;
                lists.erase(mp[last]);
                mp.erase(last);
                lists.push_front({key,value});
                mp[key]=lists.begin();
            }
            else
            {
                 lists.push_front({key,value});
                mp[key]=lists.begin();
            }
        }
        else
        {
            lists.erase(mp[key]);
            lists.push_front({key,value});
            mp[key]=lists.begin();
        }
    }
};

class LRUCache{
    public :
        list<pair<int,int>> LRU;
        unordered_map<int , list<pair<int,int>> :: iterator> mp;
        int cap  ;

    LRUCache(){

    }
    LRUCache(int _cap){
        cap = _cap;
    }
    int get(int key){
        if(mp.find(key) == mp.end()) return -1;
        else {
            int value =(*mp[key]).second;
            LRU.erase(mp[key]);
            LRU.push_front({key,value});
            mp[key] = LRU.begin();
            return (*mp[key]).second;
        }
    }

    void put(int key , int value){
        if(mp.find(key) == mp.end()){
            if(LRU.size() == cap){
                int back = LRU.back().first;
                LRU.erase(mp[back]);
                mp.erase(back);
            }
        }
        else
            LRU.erase(mp[key]);

        LRU.push_front({key , value});
        mp[key] = LRU.begin();
    }
};
