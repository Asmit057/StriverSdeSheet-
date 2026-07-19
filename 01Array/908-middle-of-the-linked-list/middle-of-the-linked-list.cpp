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
    ListNode* middleNode(ListNode* head) {
        int count=1;
        int mid;
        ListNode * temp = head;
        while(temp->next!=NULL)
        {
            count++;
            temp = temp->next;
        }
        cout<<" count is "<<count;
        if(count%2==0)
        {
        mid = (count)/2;
        mid = mid+1;
        }
        else{
            mid = (count+1)/2;
        }
        while(mid>1)
        {
            head= head->next;
            mid--;
        }
        return head;
    }
};