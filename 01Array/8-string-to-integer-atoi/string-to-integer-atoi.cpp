class Solution {
public:
    //string sign = "+";

    long long solve(string &s, int i, int sign, long long num) {
        // Stop if end of string or current char is not a digit
        if (i >= s.size() || !isdigit(s[i]))
            return sign * num;

        int digit = s[i] - '0';

        // Overflow check
        if (num > INT_MAX / 10 ||
            (num == INT_MAX / 10 && digit > (sign == 1 ? 7 : 8))) {
            return (sign == 1) ? INT_MAX : (long long)INT_MIN;
        }

        return solve(s, i + 1, sign, num * 10 + digit);
    }

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

        return (int)solve(s, i, sign, 0);
    }
};