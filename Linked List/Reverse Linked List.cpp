class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* forward=NULL;
        while(cur!=NULL)
        {
            forward=cur->next;
            cur->next=prev; 
            prev=cur;
            cur=forward;
        }
        return prev;
    }
};


class Solution {
public:
void reverse(ListNode* &head,ListNode* &cur,ListNode* &prev)
{
    if(cur==NULL)
    {
        head=prev;
        return ;
    }
     ListNode* forward=cur->next;
     reverse(head,forward,cur);
     cur->next=prev;
}
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* cur=head;
        reverse(head,cur,prev);
        return head;
    }
};
