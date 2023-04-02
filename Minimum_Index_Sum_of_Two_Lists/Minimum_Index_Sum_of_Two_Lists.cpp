class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> l1;
        int min = INT_MAX;
        vector<string> ans;
        for(int i=0;i<list1.size();i++){
            l1[list1[i]] = i+1;
        }
        for(int i=0;i<list2.size();i++){
            if(l1[list2[i]]!=0){
                int tmp_min = i+l1[list2[i]]-1;
                if(min>tmp_min){
                    ans.clear();
                    min = tmp_min;
                    ans.push_back(list2[i]);
                }else if(min==tmp_min){
                    ans.push_back(list2[i]);
                }
            }
        }
        // cout<<l1["Steakhouse"]<<endl;
        return ans;
    }
};
