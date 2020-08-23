#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        char arr[256] = {0};
        if(s.size() != t.size()) return false;            
        for (char c : s) ++arr[c];
        for (char c : t) --arr[c];
        for(int i = 0; i < 256; ++i) {
            if(arr[i] != 0) return false;
        }
        return true;
    }
};
int main()
{
    Solution s;
    string m{"anagram"};
    string t{"nagaram"};
    
    if(s.isAnagram(m,t) == true)
        cout << "is Anagram.\n";
    else 
        cout<< "not is Anagram.\n";
}
