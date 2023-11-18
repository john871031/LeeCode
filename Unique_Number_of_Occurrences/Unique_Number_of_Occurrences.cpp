class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_set<int> s;
        int len = arr.size();
        for(int i:arr){
            mp[i]++;    
        }
        for(auto m:mp){
            if(!s.count(m.second)){
                s.insert(m.second);
            }else{
                return false;
            }
        }
        return true;
    }
};
