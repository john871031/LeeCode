class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<long> num;
        for(int i=0;i<tokens.size();i++){
            int size = num.size()-1;
            long cal = 0;
            if(tokens[i]=="+"){
                cal = num[size-1] + num[size];
                num.pop_back();
                num.pop_back();
                num.push_back(cal);
                // cout<<num[num.size()-1]<<endl;
            }else if(tokens[i]=="-"){
                cal = num[size-1] - num[size];
                num.pop_back();
                num.pop_back();
                num.push_back(cal);
                // cout<<num[num.size()-1]<<endl;
            }else if(tokens[i]=="*"){
                cal = num[size-1] * num[size];
                num.pop_back();
                num.pop_back();
                num.push_back(cal);
                // cout<<num[num.size()-1]<<endl;
            }else if(tokens[i]=="/"){
                cal = num[size-1] / num[size];
                num.pop_back();
                num.pop_back();
                num.push_back(cal);
                // cout<<num[num.size()-1]<<endl;
            }else{
                num.push_back(stoi(tokens[i]));
                // cout<<num[num.size()-1]<<endl;
            }
            // cout<<num[size]<<endl;
        }
        return num[0];
    }
};
