/*

234. Palindrome Linked List

https://leetcode.com/problems/palindrome-linked-list/

*/

class Solution {
public:
    
    ListNode *reverse_linkedList(ListNode *head)
    {
        if(head==NULL) return NULL;
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *nxt=curr->next;
        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=nxt;
            if(nxt!=NULL)nxt=nxt->next;
        }
    return prev;
        
    }
    bool isPalindrome(ListNode* head)
    {
        ListNode *slow=head ,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverse_linkedList(slow->next);
        
        ListNode *start=head , *mid=slow->next;
        
        while(mid!=NULL)
        {
            if(start->val!=mid->val) return false;
            
            start=start->next;
            mid=mid->next;
        }
        slow->next=reverse_linkedList(slow->next);
        return true;
    }
};