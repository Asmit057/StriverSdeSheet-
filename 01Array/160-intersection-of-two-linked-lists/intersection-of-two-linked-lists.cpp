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
       int count1=0;
       int count2=0;
       ListNode*temp1 = headA;
       ListNode *temp2 = headB;
       while(headA->next!=NULL)
       {
        count1++;
        headA = headA->next;
    }
    while(headB->next!=NULL)
    {
        count2++;
        headB = headB->next;
    }
    int d=abs(count2 - count1);
    if(count2>count1)
    {
        while(d>0)
        {
            temp2 = temp2->next;
            d--;
        }
    }
    else{
        while(d>0)
        {
            temp1 = temp1->next;
            d--;
        }
    }
    ListNode *result = NULL;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1==temp2)
        {
            return temp1;
        }
        temp1  = temp1->next;
        temp2 = temp2->next;
    }
    return result;
    }

};