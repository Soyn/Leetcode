#include <iostream>
#include <string>
#include <algorithm>
/********************************************************************
* @Author: Soyn
* @Brief: Details in https://leetcode.com/problems/zigzag-conversion/
* @CreatedTime: 21/7/16
*********************************************************************/
class Solution{
public:
    std::string Convert(std::string str, int number_rows)
    {
        std::string result = "";
        int start_step_size = std::max(1, 2 * (number_rows - 1));
        for(int i = 0; i < number_rows; ++i){
            int current_step_size = 2 * i;
            for(int j = i; j < str.size(); j += current_step_size){
                result += str[j];
                if(current_step_size != start_step_size){
                    current_step_size = start_step_size - current_step_size;
                }
            }
        }
        return result;
    }
};
