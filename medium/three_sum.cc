#include ".idea/3_Sum.h"

/****************************
 * @Author: Soyn
 * @Brief: 3Sum, time costs O(N^2)
 * @CreatedTime: 13/9/2016
 * *************************/

std::vector<std::vector<int>> Solution::ThreeSum(std::vector<int>& int_vec)
{
    std::sort(int_vec.begin(), int_vec.end());
    int length = int_vec.size();
    std::vector<std::vector<int>> trip_vec;
    for(int i = 0; i < length; ++i){
        if(i > 0 && int_vec[i] == int_vec[i - 1]){
            continue;
        }

        int target = -int_vec[i];
        int small = i + 1, big = int_vec.size() - 1;
        while (small < big){
            if(small > i + 1 && int_vec[small] == int_vec[small - 1]){
                ++small;
                continue;
            }
            if((int_vec[small] + int_vec[big]) == target){
                std::vector<int> temp{int_vec[i], int_vec[small], int_vec[big]};
                trip_vec.push_back(temp);
                ++small;
            }else{
                if((int_vec[small] + int_vec[big]) < target){
                    ++small;
                } else{
                    --big;
                }
            }
        }

    }
        return trip_vec;
}

