class Solution {
public:
bool palindrome(vector<int> arr)
{
    int s=0;
    int e=arr.size()-1;
    while(s<=e)
    {
        if(arr[s]!=arr[e])
        {
        return false;}
        s++;
        e--;

    }
    return true;
}
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp=temp->next;

        }
        return palindrome(arr);
        
    }
};

class Solution {
public:
  ListNode* getmid(ListNode* head)
  {
      ListNode*slow=head;
      ListNode*fast=head->next;
      while(fast!=NULL && fast->next!=NULL)
      {
          fast=fast->next->next;
          slow=slow->next;
      }
      return slow;

  }
  ListNode* reverse(ListNode* head)
  {
      ListNode* cur=head;
      ListNode* prev=NULL;
      ListNode* next=NULL;
      while(cur!=NULL)
      {
          next=cur->next;
          cur->next=prev;
          prev=cur;
          cur=next;
      }
     return prev;
  }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return true;
        ListNode* middle=getmid(head);
        ListNode* temp=middle->next;
        middle->next=reverse(temp);

        ListNode* head1=head;
        ListNode* head2=middle->next;
        while(head2!=NULL)
        {
            if(head1->val != head2->val)
            return false;
            head1=head1->next;
            head2=head2->next;
        }
        return true;
    }
};
