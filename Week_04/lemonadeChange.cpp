class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int bill_5 = 0, bill_10 = 0;
        for(int i : bills) {
            switch(i) {
                case 5: {
                bill_5++;
                break;
                }
                case 10: {
                    bill_10++; 
                    bill_5--;
                    break;
                }
                case 20: {
                    if(bill_10 > 0) {
                        bill_10--; bill_5--;
                    } else {
                        bill_5 = bill_5 - 3;
                    }
                    break;
                }
            }
            if(bill_5 < 0 ) return false;
        }
        return true;
    } 
};
