#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
/********************************************************
* @Author: Soyn
* @Brief: Given a string, find the length of the longest
* substring without repeating characters.
* @CreatedTime:15/7/16
********************************************************/

class Solution{
public:
    int LengthOfLongestSubstring(std::string s)
    {
        int repeat_counts = 0, current_position = 0,
        len = 0, table[128] = {0};

        while(current_position < s.size()){
            table[s[current_position]]++;
            while(table[s[current_position]] > 1)
                table[s[repeat_counts++]]--;
            len = std::max(len, current_position - repeat_counts + 1);
            current_position++;
        }
        return len;
    }
};
int main(int argc, char **argv)
{
    Solution test;
    std::string test_string("aab");
    std::cout << test.LengthOfLongestSubstring(test_string);
    return 0;
}
