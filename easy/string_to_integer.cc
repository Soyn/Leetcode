#include <iostream>
#include <climits>
/*********************************************************************
* @Author: Soyn
* @Brief: Implement atoi to convert a string to an integer.
* More details inhttps://leetcode.com/problems/string-to-integer-atoi/
*********************************************************************/
class Solution{
public:
    void SplitSpacesOfOrigin(std::string& str)
    {
        int start = 0, _end = str.length() - 1;
        while(start < str.length() && str[start] == ' '){
            ++start;
        }

        while(_end >= 0 && str[_end] == ' '){
            --_end;
        }

        str = str.substr(start, _end - start + 1);
    }
    int64_t MyAtoi(std::string str)
    {
        SplitSpacesOfOrigin(str);
        int sign = 1;
        int i = 0;
        if(str[i] == '-' || str[i] == '+'){
            sign = 1 - 2 * (str[i] == '-');
            ++i;
        }
        int result = 0;
        while(str[i] >= '0' && str[i] <= '9'){
            if(result > INT_MAX / 10 || (result == INT_MAX / 10 && str[i] - '0' > 7)){
                if(sign == -1){
                    return INT_MIN;
                }else{
                    return INT_MAX;
                }
            }
            result = result * 10 + (str[i] - '0');
            ++i;
        }
        return sign * result;
    }
};
