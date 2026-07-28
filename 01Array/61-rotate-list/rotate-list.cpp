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
    ListNode* rotateRight(ListNode* head, int k) {
         if(head==NULL || k==0 )
        {
            return head;
        }
        int count=0;
        ListNode * temp = head;
        while(temp)
        {
        count++;
        temp = temp->next;
        }
        
        k = k%count;
        if(k==0)
        {
            return head;
        }
        int c1 = count-k;
        ListNode *temp2 = head;
        while(c1>1 && temp2!=NULL)
        {
            temp2 = temp2->next;
            c1--;
        }
        ListNode *head1 = temp2->next;
        temp2->next= NULL;
        ListNode * temp3 = head1;
        while(temp3 && temp3->next)
        {
            temp3 = temp3->next;
        }
        temp3->next = head;
        return head1;
    }
};