class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans = 0;
        vector<int> rec;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                rec.pop_back();
            }else if(operations[i]=="D"){
                rec.push_back(rec[rec.size()-1]*2);
            }else if(operations[i]=="+"){
                rec.push_back(rec[rec.size()-1] + rec[rec.size()-2]);
            }else{
                rec.push_back(stoi(operations[i]));
            }
        }
        for(int i=0;i<rec.size();i++){
            ans += rec[i];
        }
        return ans;
    }
};
