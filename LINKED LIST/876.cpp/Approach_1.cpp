/*

876. Middle of the Linked List [Approach-1]

https://leetcode.com/problems/middle-of-the-linked-list/


Intuition :- finding the size of the LinkedList folllowed by traversing the linked list upto its size/2 
and returning the rest values.

1. TC=O(n)
2. SC=O(1)
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode *curr=head;
        int n=0;
        while(curr!=NULL)
        {
            n++;
            curr=curr->next;
        }
        n=n/2; 
        curr=head; //reinitiallizing curr as head beacause after the while loop it became NULL
        while(n--)
        {
            curr=curr->next;
        }


        return curr;


    }
};
