/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previous_ptr=NULL;
        ListNode* current_ptr=head;
        ListNode* next_ptr;
        
        while(current_ptr != NULL){
            next_ptr= current_ptr->next;
            current_ptr->next =previous_ptr;
            
            previous_ptr=current_ptr;
            current_ptr=next_ptr;
            
            
        }
        
        return previous_ptr;
     
        
    }
};