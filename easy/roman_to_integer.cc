#include <iostream>
#include <string>
/***********************************************************
* @Author: Soyn
* @Brief:Given a roman numeral, convert it to an integer.
* Input is guaranteed to be within the range from 1 to 3999.
* @CreatedTime: 6/8/16
***********************************************************/
int RomanToInteger(std::string& roman_number)
{
    int result = 0;
    int previous_sum = 0, current_sum = 0;
    for(auto iter : roman_number){
        switch(iter){
            case 'I' : current_sum = 1; break;
            case 'V' : current_sum = 5; break;
            case 'X' : current_sum = 10; break;
            case 'L' : current_sum = 50; break;
            case 'C' : current_sum = 100; break;
            case 'D' : current_sum = 500; break;
            case 'M' : current_sum = 1000; break;
        }
        result += current_sum;
        if(previous_sum < current_sum){
            result -= (previous_sum << 1);
        }
        previous_sum = current_sum;
    }
    return result;
}
