class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // vector<int> change(21, 0);
        // for(int i=0;i<bills.size();i++){
        //     // cout<<bills[i]<<' '<<change[5]<<' '<<change[10]<<' '<<change[20]<<endl;
        //     switch(bills[i]){
        //         case 5:
        //             change[bills[i]]++;
        //             break;
        //         case 10:
        //             if(change[5]>=1){
        //                 change[bills[i]]++;
        //                 change[5]--;
        //             }else return false;
        //             break;
        //         default:
        //             if(change[10]>=1 && change[5]>=1){
        //                 change[5]--;
        //                 change[10]--;
        //                 change[bills[i]]++;
        //             }else if(change[5]>=3){
        //                 change[5] -= 3;
        //                 change[bills[i]]++;
        //             }else return false;
        //     }
        // }
        // return true;

        int m5 = 0;
        int m10 = 0;
        for(int i=0;i<bills.size();i++){
            // cout<<bills[i]<<' '<<change[5]<<' '<<change[10]<<' '<<change[20]<<endl;
            switch(bills[i]){
                case 5:
                    m5++;
                    break;
                case 10:
                    if(m5>=1){
                        m10++;
                        m5--;
                    }else return false;
                    break;
                default:
                    if(m10>=1 && m5>=1){
                        m5--;
                        m10--;
                    }else if(m5>=3){
                        m5 -= 3;
                    }else return false;
            }
        }
        return true;
    }
};
