class Solution {
public:
int getlength(ListNode* head)
{
    int length=0;
    while(head!=NULL)
    {
        head=head->next;
        length++;
    }
    return length;
}
    ListNode* middleNode(ListNode* head) {
        
        int length=getlength(head);
        int mid=(length/2);
        int count=0;
        while(count<mid)
        {
            head=head->next;
            count++;
        }
        return head;
    }
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head, *fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
