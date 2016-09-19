//
// Created by Apple on 9/15/16.
//

#include "three_sum_closest.hpp"
/******************************
 * @Author: Soyn
 * @Brief: 3 sum closest
 * @CreatedTime: 18/9/16
 * ***************************/

int MyAbs(int value){
    return (value < 0 ? -value : value);
}
int Solution::ThreeSumClosest(vector<int> &numbers, int target)
{
    sort(numbers.begin(), numbers.end());
    int result = numbers[0] + numbers[1] + numbers[2];
    for(int i = 0; i < numbers.size(); ++i){
        int start = i + 1, end = numbers.size() - 1;
        while(start < end){
            if(MyAbs(((numbers[i] + numbers[start] + numbers[end]) - target)) <
                    MyAbs(target - result)){
                result = numbers[i] + numbers[start] + numbers[end];
            }
            if(numbers[i] + numbers[start] + numbers[end] < target){
                ++start;
            }else{
                --end;
            }
        }
    }
    return result;

}

