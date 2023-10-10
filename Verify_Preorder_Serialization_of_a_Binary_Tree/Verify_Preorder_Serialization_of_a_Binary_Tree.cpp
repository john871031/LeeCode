class Solution {
public:
    bool isValidSerialization(string preorder) {
        istringstream in(preorder);
        string s = "";
        vector<string> v;
        int count = 0;
        while(getline(in, s, ',')) v.push_back(s);
        if(v.back()=="#") v.pop_back();
        for(string i:v){
            if(i!="#"){
                count++;
                continue;
            }
            count--;
            if(count<0) return false;
        }
        if(count==0) return true;
        return false;
    }
};
