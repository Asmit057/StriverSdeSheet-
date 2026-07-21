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
    bool isPalindrome(ListNode* head) {
        ListNode * temp = head;
        int count=0;
        while(temp!=NULL)
        {
         count++;
          temp = temp->next;
        }
        int count1 = count/2;
        
        ListNode * revH = head;
        while(count1>0)
        {
            revH = revH->next;
            count1--;
        }
        ListNode *prev = NULL;
        while(revH!=NULL)
        {
           ListNode *next = revH->next;
            revH->next = prev;
            prev = revH;
            revH = next;
        }
        int count2 = count/2;
        while(count2>0)
        {
            if(head->val!=prev->val)
            {
                return false;
            }
            count2--;
            head = head->next;
            prev = prev->next;
        }
        return true;
       
    }
};