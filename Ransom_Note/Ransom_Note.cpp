class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> r;
        unordered_map<char,int> m;
        for(auto x:ransomNote) r[x]++;
        for(auto y:magazine) m[y]++;
        
        for(auto z: r){
            if(m[z.first]<z.second) return false;
        }
        return true;
    }
};
