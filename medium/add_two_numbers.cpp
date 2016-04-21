#include <iostream>
/******************************************************************************
* @Author: Soyn.
* @Brief: You are given two linked lists representing two non-negative numbers.
* The digits are stored in reverse order and each of their nodes contain a
* single digit. Add the two numbers and return it as a linked list.
* Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
* Output: 7 -> 0 -> 8
* @Note: More details please go to https://leetcode.com/problems/add-two-numbers/
* CreatedTime: 21/4/16
********************************************************************************/
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};
class Solution{
public:
    ListNode *AddTwoNumbers(ListNode *l1, ListNode *l2)
    {
      ListNode *current_pointer_to_l1 = l1, *current_pointer_to_l2 = l2;
        ListNode *head = nullptr, *tail = head;
        int carry = 0;
        while(current_pointer_to_l1 || current_pointer_to_l2){
                int sum = (current_pointer_to_l1 ? current_pointer_to_l1->val
                           : 0) +
                (current_pointer_to_l2 ? current_pointer_to_l2->val : 0) + carry;

                carry = sum / 10;
                auto new_node = new ListNode(sum % 10);
                if(head){
                    tail = tail->next = new_node;
                }else{
                    head = tail = new_node;
                }
                if(current_pointer_to_l1)
                    current_pointer_to_l1 = current_pointer_to_l1->next;
                if(current_pointer_to_l2)
                    current_pointer_to_l2 = current_pointer_to_l2->next;

        }

        if(carry){
            tail = tail->next = new ListNode(carry);
        }
        return head;
    }
};
