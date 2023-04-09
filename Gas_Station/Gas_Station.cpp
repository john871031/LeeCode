class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int len = gas.size();
        int count_gas = 0;
        int count_cost = 0;
        int cur = 0;
        int ans = 0;
        for(int i=0;i<len;i++){
            count_gas += gas[i];
            count_cost += cost[i];
            cur += gas[i] - cost[i];
            if(cur<0){
                ans = i+1;
                cur = 0;
            }
        }
        if(count_gas < count_cost) return -1;
        return ans;
    }
};
