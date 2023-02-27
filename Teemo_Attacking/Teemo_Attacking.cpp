class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.size()==1) return duration;
        int ans=0;
        
        for(int i=1;i<timeSeries.size();i++){
            if((timeSeries[i]-timeSeries[i-1])<=duration) ans += timeSeries[i]-timeSeries[i-1];
            else ans += duration;
        }
        ans += duration;
        return ans;
    }
};
