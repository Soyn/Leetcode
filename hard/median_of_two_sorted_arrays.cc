#include <iostream>
#include <vector>
/****************************************************************************
* @Author: Soyn
* @Brief: There are two sorted arrays nums1 and nums2 of size m and n
* respectively.Find the median of the two sorted arrays. The overall
* run time complexity should be O(log (m+n)).
* (More details in https://leetcode.com/problems/median-of-two-sorted-arrays/)
* @CreatedTime: 15/7/16
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
            int length = numbers.size();
            if(length % 2){
                return (static_cast<double>(numbers[length / 2 ]));
            }else{
                return static_cast<double>((numbers[length / 2] + numbers[length / 2 - 1]) * 0.5);
            }
    }
};

