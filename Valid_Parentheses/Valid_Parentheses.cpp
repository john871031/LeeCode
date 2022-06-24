class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i=0;i<s.length();i++){
            if(stack.empty() || s[i]=='(' || s[i]=='[' ||s[i]=='{'){
                stack.push(s[i]);
            }else if((s[i]==')' && stack.top()=='(' ) || (s[i]==']' && stack.top()=='[') || (s[i]=='}' && stack.top()=='{')){
                stack.pop();
            }else{
                return false;   
            }
        }
        return stack.empty();
    }
};
