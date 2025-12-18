class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1, num = 0;

        while (i < s.size() && s[i] == ' ') i++;

        if (i < s.size() && (s[i] == '+' || s[i] == '-'))
            sign = (s[i++] == '-') ? -1 : 1;

        while (i < s.size() && isdigit(s[i])) {
            int d = s[i++] - '0';
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && d > 7))
                return sign == 1 ? INT_MAX : INT_MIN;
            num = num * 10 + d;
        }

        return sign * num;
    }
};
