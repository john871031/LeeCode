class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int len = gain.size();
        int start = 0;
        int high = 0;
        for(int i=1;i<=len;i++){
            start += gain[i-1];
            // cout<<index[i]<<endl;
            high = max(high, start);
        }
        return high;
    }
};
