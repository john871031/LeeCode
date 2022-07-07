class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        bool plus = false;
        for(int i=len-1;i>=0;i--){
            digits[i] += 1;
            if(digits[i] != 10){
                plus = false;
                break;
            }
            else{
                plus = true;
                digits[i] = 0;    
            }
        }
        if(plus) digits.insert(digits.begin(), 1);
        return digits;
    }
};
