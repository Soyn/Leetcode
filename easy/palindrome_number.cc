#include <iostream>
#include <string>
/*****************************************************
* @Author: Soyn
* @Brief:Determine whether an integer is a palindrome.
* Do this without extra space.
* @CreatedTime: 24/7/16
*****************************************************/
class Solution{
public:
    bool IsPalindromeNumber(int x)
    {
        bool is_palindrome_number = false;
        int reverse_x = 0;
        int copy_of_x = x;
        if(x >= 0){
            while(copy_of_x){
                reverse_x = reverse_x * 10 + copy_of_x % 10;
                copy_of_x = copy_of_x / 10;
            }
            if(reverse_x == x ){
                is_palindrome_number = true;
            }
        }
        return is_palindrome_number;
    }
};

