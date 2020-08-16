#include <vector>
#include <iostream>   
#include <algorithm>    // equal
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int jinwei = 1;
        int tmp = 0;
        for(int i = digits.size()-1; i >= 0; i--) {        
            tmp  = digits[i] + jinwei;        
            digits[i] = (tmp) % 10;
            jinwei =  (tmp) / 10;
        }
        if(jinwei)
        {
            digits.insert(digits.begin(), jinwei);
        }
        return digits;
    }
    void inputVector(vector<int>& nums) {
        int i=0;
	    while(1) {
            cin >> i;
           // cout << "i=" << i << endl;
            nums.push_back(i);
            if(cin.get() == '\n') {
                break;
            }
        }
        for (int k = 0; k < nums.size(); k++) {
	        cout << nums[k] << " ";
        }
        cout << endl;
    }

};

int main() {
    vector<int> nums_in;
    vector<int> nums_out;
    Solution s;
    cout << "请输入待加1数组\n";
    s.inputVector(nums_in);
    cout << "请输入验证数组\n";
    s.inputVector(nums_out);
    s.plusOne(nums_in);

    if(equal(nums_in.begin(), nums_in.end(), nums_out.begin())) {
        cout << "equal vector \n";
    } else {
          cout << "not equal vector \n";
    }
}
