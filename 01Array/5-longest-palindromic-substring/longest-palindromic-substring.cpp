class Solution {
public:
        int firstInd = 0;
    int lastInd = 0;
    int result = 0;

    void expand(string &s, int lc, int rc)
    {
        int n = s.size();
        int count=0;
        while (lc >= 0 && rc < n && s[lc] == s[rc])
        {
            lc--;
            rc++;
            count++;
        }

       int len = rc - lc - 1;

        if (len > result)
        {
            result = len;
            firstInd = lc + 1;
            lastInd = rc - 1;
        }
    }
    
    string longestPalindrome(string s) {
       int n = s.size();
        for (int i = 0; i < s.size(); i++)
        {
            expand(s, i, i);       // odd
            expand(s, i, i + 1);   // even
        }

       string ans = "";
       for(int i=firstInd; i<= lastInd; i++)
       {
        ans += s[i];
       }
       return ans;
    }
};