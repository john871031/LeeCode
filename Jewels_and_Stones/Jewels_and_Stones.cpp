class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp;
        int ans = 0;
        for(int i=0;i<stones.size();i++){
            mp[stones[i]]++;
        }
        
        for(auto n: mp){
            for(int j=0;j<jewels.size();j++){
                if(jewels[j]==n.first) ans += n.second;
            }
        }
        return ans;
    }
};
