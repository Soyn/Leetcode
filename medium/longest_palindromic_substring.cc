#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
/*********************************************************************
* @Author: Soyn
* @Brief:Given a string S, find the longest palindromic substring in S.
* You may assume that the maximum length of S is 1000, and there exists
* one unique longest palindromic substring.
* @CreatedTime: 19/7/16
***********************************************************************/
class Solution{
public:
    std::string ExpandAroundCenter(std::string str, int left, int right)
    {
        int n = str.length();
        while(left >= 0 && right < n && (str[left] == str[right])){
            --left;
            ++right;
        }

        return str.substr(left + 1, right - left - 1);
    }
    std::string LongestPalindromic(const std::string str)
    {
        int n = str.length();
        if(n == 0) return "";
        std::string longest = str.substr(0, 1);
        for(auto i = 0; i < n - 1; ++i){
            std::string p1 = ExpandAroundCenter(str, i, i);
            if(p1.length() > longest.length()){
                longest = p1;
            }

            std::string p2 = ExpandAroundCenter(str, i, i + 1);
            if(p2.length() > longest.length()){
                longest = p2;
            }
        }
        return longest;
    }
};
int main(int argc, char **argv)
{
    Solution test;
    std::cout << test.LongestPalindromic("fabcbaeabc");
    return 0;
}
