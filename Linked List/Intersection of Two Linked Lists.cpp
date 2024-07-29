//TC- O(nm)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp;
        while(headA!=NULL)
        {
            temp=headB;
            while(temp!=NULL)
            {
                if(headA==temp)return headA;
                temp=temp->next;
            }
            headA=headA->next;
        }
        return NULL;      
    }
};

//TC- O(n+m)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>m;
        while(headA!=NULL)
        {
            m[headA]++;
            headA=headA->next;
        }  
        while(headB!=NULL)
        {
            if(m[headB]>0)return headB;
            headB=headB->next;
        }
        return NULL;
    }
};
