/*

206. Reverse Linked List    [Iterative Approach]

https://leetcode.com/problems/reverse-linked-list/

NOTE:- Reversing the linked list doesn't means reversing the values,
 instead we have to reverse the connections. For any value, it will be at its original address, 
 only reverse the connection.

Example:-
1->2->3->4->5  [5 is pointing NULL]
1<-2<-3<-4<-5  [1 is pointing NULL]

Intuition :-Taking 3 pointers :
                curr   -  it will store the current value
				prev   -it will store the previous value of curr
				nxt     -it will store the next value to curr.
	Now iterate untill curr isn't NULL. And update curr->next as prev , prev as curr and curr as nxt ,
    followed by moving nxt ahead if it isn't NULL.
	Finally return prev.
	
	1.TC=O(N)
	2.SC=O(1)

*/



class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        
        if(head==NULL) return NULL; //if linked list is empty return NULL
        
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *nxt=curr->next;
        
        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=nxt;
            if(nxt!=NULL) nxt=nxt->next; 
        }
    return prev;
    }
};