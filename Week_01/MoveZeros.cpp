#include <vector>
#include <iostream>   
#include <algorithm>    // equal
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                int tmp =  nums[j];
                nums[j++] = nums[i];
                nums[i] = tmp;
            }
        }                
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
    cout << "��������ƶ�0����\n";
    s.inputVector(nums_in);
    cout << "���������֤����\n";
    s.inputVector(nums_out);
    s.moveZeroes(nums_in);

    if(equal(nums_in.begin(), nums_in.end(), nums_out.begin())) {
        cout << "equal vector \n";
    } else {
          cout << "not equal vector \n";
    }
}
