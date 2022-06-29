/*
    1. 0
    2. 2 2				    
    3. 4 2 4			    
    4. 6 4(2) 2(4) 6		
    5. 8 6(2) 4 2(6) 8
    6. 10 8(2) 6(4) 4(6) 2(8) 10
*/
class Solution {
public:
    string convert(string s, int numRows) {
        int s_len = s.length();
        int start = 2+2*(numRows-2);
        int index = start;
        string ans;
        if(numRows == 1) return s;
        for(int i=0;i<numRows;i++){
            int j = i;
            while(j < s_len){
                ans += s[j];
                j += index;
                if(index != start && j<s_len){
                    index = start - index;
                }
            }
            index = start - 2*(i+1);
            if(index == 0){
                index = start;
            }
        }
        return ans;
    }
};
