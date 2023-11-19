class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int len = temperatures.size();
        vector<int> ans(len, 0);
        stack<int> st;
        for(int i=0;i<len;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int t = st.top();
                st.pop();
                ans[t] = i-t;
            }
            st.push(i);
        }
        return ans;
    }
};
