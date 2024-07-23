//prerequsite- LCS nad longest palindromic subsequence
class Solution {
public:
    int lcs(string s1,string s2)
    {
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
        }
        for(int j=0;j<=m;j++)
        {
            dp[0][j]=0;
        }

        for(int ind1=1;ind1<=n;ind1++)
        {
            for(int ind2=1;ind2<=m;ind2++)
            {
                if(s1[ind1-1]==s2[ind2-1])
                dp[ind1][ind2]=1+dp[ind1-1][ind2-1];
                else
                dp[ind1][ind2]=max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
            }
        }
        return dp[n][m];
    }
    int long_palin(string s)
    {
        string t=s;
        reverse(t.begin(),t.end());
        return lcs(s,t);
    }
    int minInsertions(string s) {
        int n=s.length();
        return n-long_palin(s);
        
    }
};
