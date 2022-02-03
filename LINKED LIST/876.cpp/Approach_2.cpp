/*

876. Middle of the Linked List  [Approach-2]

https://leetcode.com/problems/middle-of-the-linked-list/


Intuition :- Taking 2 pointers slow & fast such that slow moves 1 step at a time & fast moves twice of slow . So, when fast will reach/cross the end then slow will reach the middle of the linked list.

1. TC=O(n)
2. SC=O(1)
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *slow=head , *fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
    return slow;
    }
};