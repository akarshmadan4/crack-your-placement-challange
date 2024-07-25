class Solution {
public:
    int calculate(string s) {
        int num=0;
        char opr='+';
        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            if(isdigit(c))
            num=num*10+(c-'0');

            if((!isdigit(c)&& c!=' ')||i==s.size()-1)
            {
                if(opr=='+')st.push(num);
                else if(opr=='-')st.push(-num);
                else if(opr=='*')
                {
                    int temp=st.top()*num;
                    st.pop();
                    st.push(temp);
                }
                else if(opr=='/')
                {
                    int temp=st.top()/num;
                    st.pop();
                    st.push(temp);
                }
                opr=c;
                num=0;
            }
        }
        int ans=0;
        while(!st.empty())
        {
            ans+=st.top();st.pop();
        }
        return ans;
    }
};
