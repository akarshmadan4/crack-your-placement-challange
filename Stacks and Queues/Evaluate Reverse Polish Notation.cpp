class Solution {
public:
    bool isSign(string ch)
    {
        if(ch=="+"||ch=="-"||ch=="*"||ch=="/")return true;
        else return false;

    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto i:tokens)
        {
            if(isSign(i))
            {
                int num2=st.top();
                st.pop();
                int num1=st.top();
                st.pop();
                if(i=="+")
                st.push(num1+num2);
                else if(i=="-")
                st.push(num1-num2);
                else if(i=="*")
                st.push(num1*num2);
                else
                st.push(num1/num2);
            }
            else
            {
                int temp=stoi(i);
                st.push(temp);
            }
        }
        return st.top();
    }
};
