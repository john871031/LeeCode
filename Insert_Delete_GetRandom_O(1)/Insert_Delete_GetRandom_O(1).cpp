class RandomizedSet {
public:
    unordered_map<int,int> mp;
    vector<int> res;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()) return false;
        res.push_back(val);
        mp[val] = res.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end()) return false;
        int index = mp[val];
        int last = res.back();
        mp[last] = index;
        swap(res[res.size()-1], res[index]);
        res.pop_back();
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        return res[rand()%res.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
