class RandomizedSet {
public:
    unordered_map <int,int> mp;
    vector <int> v;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()) return false;
        else{
            v.push_back(val);
            mp[val]=v.size()-1;
            return true;
        }
    }
    
    bool remove(int val) {
        if(mp.find(val)!=mp.end()){
            auto it=mp.find(val);
            v[it->second]=v.back();
            v.pop_back();
            mp[v[it->second]]=it->second;
            mp.erase(val);
            return true;
        }
        else return false;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
