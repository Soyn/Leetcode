#include <iostream>
#include <vector>
/****************************************************************************
* @Author: Soyn
* @Brief: There are two sorted arrays nums1 and nums2 of size m and n
* respectively.Find the median of the two sorted arrays. The overall
* run time complexity should be O(log (m+n)).
* (More details in https://leetcode.com/problems/median-of-two-sorted-arrays/)
******************************************************************************/
class Solution{
public:
    double FindMedianSortedArrays(std::vector<int>& numbers1,
        std::vector<int>& numbers2)
    {
        std::vector<int> numbers;
        auto iter1 = numbers1.begin(), iter2 = numbers2.begin();
        for( ; iter1 != numbers1.end() && iter2 != numbers2.end();){
                if(*iter1 < *iter2){
                    numbers.push_back(*iter1);
                    ++iter1;
                }else{
                    numbers.push_back(*iter2);
                    ++iter2;
                }
            }

            if(iter1 != numbers1.end()){
                while(iter1 != numbers1.end()){
                    numbers.push_back(*iter1);
                    ++iter1;
                }
            }else{
                while(iter2 != numbers2.end()){
                    numbers.push_back(*iter2);
                    ++iter2;
                }
            }
            for(auto iter = numbers.begin(); iter != numbers.end(); ++iter){
                std::cout << *iter << " ";
            }
            std::cout << std::endl;
            int length = numbers.size();
            std::cout << "length: " << length << "\n";
            if(length % 2){
                std::cout << "I'm in if\n";
                return (static_cast<double>(numbers[length / 2 ]));
            }else{
                std::cout << "I'm in else\n";
                return static_cast<double>((numbers[length / 2] + numbers[length / 2 - 1]) * 0.5);
            }
    }
};
int main(int argc, char **argv)
{
    std::vector<int> int_vec1{2, 3}, int_vec2{2};
    Solution test;
    //std::cout << test.FindMedianSortedArrays(int_vec1, int_vec2);
    int i  = 2;
    double t = 2.0;
    std::cout << static_cast<double>(t);
    return 0;
}
