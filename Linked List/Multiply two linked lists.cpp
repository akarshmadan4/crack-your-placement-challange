class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        long long mod=1e9+7;
        Node *temp1=first;
        Node *temp2=second;
        long long s1=0;
        while(temp1!=NULL)
        {
            s1=(s1*10)%mod+temp1->data;
            temp1=temp1->next;
        }
        long long s2=0;
        while(temp2!=NULL)
        {
            s2=(s2*10)%mod+temp2->data;
            temp2=temp2->next;
        }
        return (s1*s2)%mod;
    }
};
