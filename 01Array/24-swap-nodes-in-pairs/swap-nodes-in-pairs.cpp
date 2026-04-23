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
    ListNode* swapPairs(ListNode* head) {

     ListNode* head1 = head;
        while( head1 != nullptr && head1->next!=nullptr)
        {
            int temp = head1->val;
            head1->val = head1->next->val;
            head1->next->val = temp;
            head1 = head1->next->next;
        } 

      return head;
    }
};