class Solution {
public:
    string sortVowels(string s) {
        // priority_queue<int, vector<int>, greater<>> pq;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') pq.push(s[i]);
        // }
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
        //         s[i] = pq.top();
        //         pq.pop();
        //     }
        // }
        // return s;

        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') v.push_back(s[i]);
        }
        sort(v.begin(), v.end());
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                s[i] = v.back();
                v.pop_back();
            }
        }
        return s;
    }
};
