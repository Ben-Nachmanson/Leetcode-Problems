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
    ListNode* partition(ListNode* head, int x) 
    {
        ListNode* l =new ListNode(0); 
        ListNode *r = new ListNode(0);
        ListNode* left = l;
        ListNode* right = r;
        
        
        while(head)
        {
            
            if(head->val < x)
            {
                left->next = head;
                left = left->next;           
            }
            else
            {
                right->next = head;
                right = right-> next;
                
            }
            head = head->next;
           
        }
        left->next = r->next;
        right->next = nullptr;
        return l->next;                
    }
};