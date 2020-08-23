#include <unordered_map>
#include <vector>
#include <iostream>   
#include <algorithm>    // equal
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> res;
	std::unordered_map<int, int> map_;
	for(int i = 0; i < nums.size(); ++i) {
	    if(map_.find(nums[i])!= map_.end()) {
		res.emplace_back(map_[nums[i]]);
		res.push_back(i);
	    }
	    map_[target - nums[i]] = i;
	}
	return res;
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
    int target;
    cin >> target;
    Solution s;
    cout << "input vector 1:\n";
    s.inputVector(nums_in);
    cout << "input result vector 2:\n";
    s.inputVector(nums_out);
    vector<int> out;
    out = s.twoSum(nums_in, target);
    if(equal(out.begin(), out.end(), nums_out.begin())) {
        cout << "equal vector \n";
    } else {
          cout << "not equal vector \n";
    }
}
