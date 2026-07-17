class Solution {
public:
    int myAtoi(string s) {
        
        int i = 0;
        int n = s.size();

        // Skip leading spaces
        while (i < n && s[i] == ' ')
            i++;

        // Check sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        long long ans = 0;

        // Convert digits
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            ans = ans * 10 + (s[i] - '0');

            if (sign == 1 && ans > INT_MAX)
                return INT_MAX;

            if (sign == -1 && -ans < INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * ans;
    }
};