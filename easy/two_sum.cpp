#include <iostream>
#include <vector>
/*******************
* @Author: Soyn
* @Brief: 1.Two Sum
* @CreatedTime: 19/3/16
* https://leetcode.com/problems/two-sum/
* Details:
* Given an array of integers, return indices of the two numbers such that they add up to a specific target.
* You may assume that each input would have exactly one solution.
* Example:
* Given nums = [2, 7, 11, 15], target = 9,
* Because nums[0] + nums[1] = 2 + 7 = 9,
* return [0, 1].
********************/

class Solution {
public:
    std :: vector<int> TwoSum(std :: vector<int> &nums, int target) {
        std :: vector<int> result;
        for(int i = 0; i < sizeof(nums); ++i){
            for(int j = i + 1; j < sizeof(nums); ++j){
                if((nums[i] + nums[j]) == target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};

void Test()
{
    std :: vector<int> test1{2, 1, 9, 4, 4, 56, 90, 3};
    Solution solution;
    for(auto e : solution.TwoSum(test1, 8)){
        std :: cout << e << std :: endl;
    }
}
int main(int argc, char **argv)
{
    Test();
    return 0;
}
