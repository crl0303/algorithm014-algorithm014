#include <iostream>
class Solution {
    public:
    bool IsPowerTwo(int n) {
        return (n > 0) && ((n & (n-1)) == 0);
    }
};

int main()
{
    Solution s;
    std::cout << " 2是否为2的幂：" <<s.IsPowerTwo(2);
    return 1;
}
