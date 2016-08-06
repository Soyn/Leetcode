#include <iostream>
#include <string>
#include <map>
#include <algorithm>
/**********************************************************
* @Author: Soyn
* @Brief: Given an integer, convert it to a roman numeral.
* Input is guaranteed to be within the range from 1 to 3999.
* @CreatedTime: 6/8/16
***********************************************************/
class Solution{
public:
    std::string IntegerToRoman(int num)
    {
        std::map<int, std::string> rules{
            {1, "I"}, {2, "II"}, {4, "IV"}, {5, "V"}, {9, "IX"},
            {10, "X"}, {20, "XX"}, {40, "XL"}, {50, "L"}, {90, "XC"},
            {100, "C"}, {200, "CC"}, {400, "CD"}, {500, "D"}, {900, "CM"},
            {1000, "M"}, {2000, "MM"}
        };

        std::string result;
        for(auto iter = rules.rbegin(); num > 0 && iter != rules.rend();
            ++iter){
            if(num >= iter->first){
                num -= iter->first;
                result += iter->second;
            }
        }
        return result;
    }

};

