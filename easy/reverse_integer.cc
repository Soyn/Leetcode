#include <iostream>
#include <climits>
/******************************************************
* @Author: Soyn
* @Brief:Reverse digits of an integer. More details in
* https://leetcode.com/problems/reverse-integer/
* CreatedTime: 21/7/16
******************************************************/
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

