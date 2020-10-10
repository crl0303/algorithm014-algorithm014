#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int a[9] = {1,2,3,4,5,6,7,8,9};
string res;
int n,k;
cin >>n >>k;:

for(int j = 1; j < k; ++j){
               next_permutation(a, a+n-1); 
           res = "";
               for(int z=0;z<n;z++){
              res+=to_string(a[z]);
              }

           cout<<res<<endl;
        }
         /*string res;
        for(int i = 0; i < n; i++) {
            res += to_string(*(a+i));
        }*/
        return 0;

}
