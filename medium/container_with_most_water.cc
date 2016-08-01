#include <cmath>

#include <iostream>
#include <vector>
/*******************
* @Author: Soyn
* @Brief: More details in
* https://leetcode.com/problems/container-with-most-water/
* @CreatedTime: 1/8/16
**/
class Solution{
public:
    int MaxArea(std::vector<int> &height)
    {
        if(height.size() == 0 || height.size() == 1){
            return 0;
        }
        int max_area = 0, area = 0;
        int start_of_height = 0, end_of_height = height.size() -1 ;
        while(start_of_height < end_of_height){
            if(height[start_of_height] < height[end_of_height]){
                area = height[start_of_height] * (
                    end_of_height - start_of_height);
                ++start_of_height;
            }else{
                area = height[end_of_height] * (
                    end_of_height - start_of_height);
                --end_of_height;
            }
            if(max_area < area){
                max_area = area;
            }
        }
        return max_area;
    }
};
