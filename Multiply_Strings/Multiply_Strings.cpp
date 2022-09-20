class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> tmp_ans;
        vector<int> tmp;
        int len1;
        int len2;
        if(num1=="0" || num2=="0") return "0";
        if(num1.size()<num2.size()){
            len1 = num2.size();
            len2 = num1.size();
            
        }else{
            len1 = num1.size();
            len2 = num2.size();
        }
        int cal;
        int carry;
        for(int i=len2-1;i>=0;i--){
            int rec=len2-1-i;
            carry = 0;
            for(int j=len1-1;j>=0;j--){
                if(num1.size()<num2.size()){
                    cal = ((num1[i]-'0')*(num2[j]-'0')+carry)%10;
                    carry = ((num1[i]-'0')*(num2[j]-'0')+carry)/10;
                }else{
                    cal = ((num1[j]-'0')*(num2[i]-'0')+carry)%10;
                    carry = ((num1[j]-'0')*(num2[i]-'0')+carry)/10;
                }
                
//                 cout << num1[j] << ' '<< num2[i]<<' ';
//                 cout<<cal<<endl;
//                 cout<<carry<<endl;
                if(i==len2-1){
                    tmp_ans.push_back(cal);
                }
                while(rec>0){
                    tmp.push_back(0);
                    rec--;
                }
                if(i<len2-1){
                    tmp.push_back(cal);
                }
            }
            
            if(carry>0 && i==len2-1) tmp_ans.push_back(carry);
            else if(carry>0 && i!=len2-1)tmp.push_back(carry);
            
//             for(int k=0;k<tmp_ans.size();k++){
//                 cout << tmp_ans[k];
//             }
//             cout << endl;
            
            if(i==len2-1) continue;
            
            int lenz = tmp_ans.size();
            carry = 0;
            for(int z=0;z<lenz;z++){
                cal = (tmp_ans[z] + tmp[z] + carry)%10;
                carry = (tmp_ans[z] + tmp[z] + carry)/10;
                tmp_ans[z] = cal;
            }
            for(int z=lenz;z<tmp.size();z++){
                tmp_ans.push_back((tmp[z]+carry)%10);
                carry = (tmp[z]+carry)/10;  //if(z+1<tmp.size()) 
            }
            
            if(carry>0) tmp_ans.push_back(carry);
            // for(int k=0;k<tmp.size();k++){
            //     cout << tmp[k];
            // }
            // cout << endl;
            // for(int k=0;k<tmp_ans.size();k++){
            //     cout << tmp_ans[k];
            // }
            // cout << endl;
            tmp.clear();
        }
        reverse(tmp_ans.begin(), tmp_ans.end());
        string ans;
        for(int k=0;k<tmp_ans.size();k++){
            ans.push_back(tmp_ans[k]+'0');
        }

        return ans;
    }
};
