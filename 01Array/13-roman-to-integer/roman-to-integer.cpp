class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int n = s.size();
        int result=0;
        for(int i=0; i<n; i++)
        {
            if(i!=0 && s[i-1]=='I' && s[i]=='V')
            {
                result = result - mp[s[i-1]] + 4;
            }
             else if(i!=0 && s[i-1]=='I' && s[i]=='X')
            {
                result = result - mp[s[i-1]] + 9;
            }
           else  if(i!=0 && s[i-1]=='X' && s[i]=='L')
            {
                result = result - mp[s[i-1]] + 40;
            }
           else  if(i!=0 && s[i-1]=='X' && s[i]=='C')
            {
                result = result - mp[s[i-1]] + 90;
            }
            else if(i!=0 && s[i-1]=='C' && s[i]=='D')
            {
                result = result - mp[s[i-1]] + 400;
            }
            else if(i!=0 && s[i-1]=='C' && s[i]=='M')
            {
                result = result - mp[s[i-1]] + 900;
            }
            else{
                result += mp[s[i]];
            }
        }
        return result;
    }
};