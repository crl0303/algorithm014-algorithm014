#include <iostream>
#include <string> 
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }
        if(s.size() == 0 && t.size() == 0)
            return true;
        for (int i=0; i < s.size(); i++)
        {
            if(s.find(s[i]) != t.find(t[i]))
            {
                return false;
            }
        }
        return true;
    }
};
int main ()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    bool ret = false;
    Solution so; 
    ret = so.isIsomorphic(s, t);
    //if(s.compare("agg") == 0 && ret == 0)
    {
        cout << "s="<<s<<" t="<<t<< "ret="<<ret<<endl;
    }
    return 0;
}
