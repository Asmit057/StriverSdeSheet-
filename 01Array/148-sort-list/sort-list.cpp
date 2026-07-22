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
   ListNode* merge(ListNode* head1, ListNode* head2)
   {
   ListNode *dummy = new ListNode(-1);
ListNode *temp = dummy;

while(head1 && head2)
{
    if(head1->val < head2->val)
    {
        temp->next = head1;
        head1 = head1->next;
    }
    else
    {
        temp->next = head2;
        head2 = head2->next;
    }
    temp = temp->next;
}

if(head1) temp->next = head1;
if(head2) temp->next = head2;

return dummy->next;
   }
   ListNode * middle(ListNode* head)
   {
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    ListNode* slow = head;
    ListNode* fast = head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast  = fast->next->next;
    }
    return slow;
   }
   ListNode* mergeSort(ListNode * head)
   {
     if(head==NULL || head->next==NULL )
     {
        return head;
     }
     ListNode * mNode = middle(head);
     ListNode * mid1 = mNode->next;
     mNode->next = NULL;
    head = mergeSort(head);
     mid1 = mergeSort(mid1);

      return merge(head, mid1);
     
   }
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
       
    }
};