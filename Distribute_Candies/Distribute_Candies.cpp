class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());
        int maxlen = candyType.size()/2;
        int ans = 1;
        for(int i=1;i<candyType.size();i++){
            if(candyType[i]==candyType[i-1]) continue;
            else ans++;
        }
        if(ans>maxlen) return maxlen;
        return ans;
    }
};
