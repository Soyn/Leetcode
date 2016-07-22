#include <iostream>
#include <climits>
class Solution{
public:
    int Reverse(int x)
    {
        //
        // @Note: define an int64_t to handle the overflow case.
        int64_t result = 0;
        while(x){
            result = result * 10 + x % 10;
            x = x / 10;
        }
        if(result > INT_MAX || result < INT_MIN){
            result = 0;
        }
        return result;
    }
};
int main(int argc, char **argv)
{
    Solution test;
    std::cout << test.Reverse(1534236469) << std::endl;
    return 0;
}
