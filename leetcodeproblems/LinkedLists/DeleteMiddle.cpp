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
    ListNode* deleteMiddle(ListNode* head)
    {   

    ListNode*slow = head;
    ListNode*slowPrev= NULL;
    ListNode*fast = head;
    if(head->next==NULL || head==NULL)
    {
        return NULL;
    }
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slowPrev = slow;       // Keep track of the node before 'slow'
        slow = slow->next;

    }
   slowPrev->next = slow->next;
    
    return head;



    }
};
