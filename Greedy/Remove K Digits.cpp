class Solution {
public:
    string removeKdigits(string num, int k) {

        if(num.length() == k) {
            return "0";
        }
        stack<char>st;
        string ans = "";
        st.push(num[0]);
        
        for(int i = 1 ; i < num.length() ; i++) {

            while((!st.empty() && st.top() > num[i]) && k>0) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(!st.empty()) {
            char front = st.top();
            ans.push_back(front);
            st.pop();
        }
        if(k>0) {
            ans.erase(0,k);
        }
        reverse(ans.begin(),ans.end());
        int p = 0;
        for(int i = 0 ; i < ans.length() ; i++) {
            if(ans[i] == '0') {
                p++;
            }
            else {
                break;
            }
        }
        string modify = "";
        for(int i = p ; i < ans.length() ; i++) {
            modify.push_back(ans[i]);
        }
        if(modify == "") {
            return "0";
        }
        return modify;
    }
};
