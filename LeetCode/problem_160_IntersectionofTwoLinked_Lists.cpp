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
        
    ListNode *p=headA, *q=headB;
        int countp=0, countq=0;
        while(p)
        {
            countp++;
            p=p->next;
        }
        while(q)
        {
            countq++;
            q=q->next;
        }
        p=headA;
        q=headB;
       int diff=abs(countp-countq);
        if(countp>countq)
        {
            while(diff--)
            {
                p=p->next;
            }
            q=headB;
            while(q)
            {
                if(p==q)
                {
                    return p;
                }
                q=q->next;
                p=p->next;
            }
        }
        if(countq>countp)
        {
            
            while(diff--)
            {
                q=q->next;
            }
            while(p)
            {
                if(p==q)
                {
                    return p;
                }
                q=q->next;
                p=p->next;
            }
        }
        if(countp==countq)
        {
            p=headA;
            q=headB;
            while(p)
            {
                if(p==q)
                {
                    return p;
                }
                p=p->next;
                q=q->next;
            }
        }
        
        return NULL;
       
    }
        
    
};
