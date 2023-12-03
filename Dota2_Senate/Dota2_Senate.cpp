class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> R;
        queue<int> D;
        int n = senate.size();
        for(int i=0;i<senate.size();i++){
            senate[i]=='R' ? R.push(i): D.push(i);
        }

        while(!R.empty() && !D.empty()){
            int r = R.front();
            int d = D.front();
            R.pop();
            D.pop();
            r<d ? R.push(r+n):D.push(d+n);
        }
        if(R.empty()) return "Dire";
        return "Radiant"; 
    }
};
