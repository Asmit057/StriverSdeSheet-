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
    bool hasCycle(ListNode *head) {
        if(head==NULL)
        {
            return false;
        }
        ListNode* slow = head;
        ListNode * fast  = head->next;
        //So fast always reaches the end before or at the same time as slow. //slow can never become NULL while fast is still valid.
     //   while(fast!=NULL && slow!=NULL && slow->next!=NULL && ////  fast->next!=NULL )
     while(fast!=NULL && fast->next!=NULL)
        {
 
        if(slow==fast)
        {
            return true;
        }
       slow = slow->next;
        fast = fast->next->next;

        }
        return false;
    }
};