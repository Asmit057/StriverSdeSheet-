class Solution {
public:
    int maxDepth(string s) {
        int n  = s.size();
        int result=0;
        int count=0;
        for(int i=0; i<n; i++)
        {
         if(s[i]=='(')
         {
            count++;
            result = max(count, result);
         }
         else if(s[i]==')'){
           count--;
         }
        }
        return result;
    }
};