/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int> ma;
       

        ListNode*temp = headA;
        while(temp!=NULL)
        {
            ma[temp]=1;
            temp=temp->next;
        }
        temp = headB;
        while(temp!=NULL)
        {

            if(ma.find(temp) != ma.end())
            {
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
            
    }
};
