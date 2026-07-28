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
   ListNode* reverseL(ListNode* head)
    {
      ListNode * prev = NULL;
      while(head)
      {
        ListNode* next = head->next;
       head->next = prev;
       prev = head;
       head = next;
      }
      return prev;
    }
    ListNode * findKthNode(ListNode * head , int kth)
    {
        int count =kth;
        while(count>1 && head!=NULL)
        {
          head =head->next;
          count--;
        }
       return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * temp = head;
        ListNode * prevLast = NULL;
        // store the last value of the group
        // bcz we are going to make it null
        while(temp!=NULL)
        {
            ListNode * kthNode = findKthNode(temp,k);
            if(kthNode == NULL) // simply attach the remaining node dont //reverse
            {
                if(prevLast){
                prevLast->next = temp;
                }
                break;
            }
            else{
                // we have to store the value of kth node in next node
               ListNode* nextNode = kthNode->next;
                kthNode->next = NULL;
                reverseL(temp);
                // after reversing also temp will be point to last node
                // bcz before it was pointing to first node
                if(temp==head)
                {
                    head = kthNode;
                }
                else{
                prevLast->next = kthNode;
                }
                // as temp point to last node of reverse list thats prevLast = temp
                 prevLast  = temp;
                temp = nextNode;
            }

        }
        return head;
    }
};