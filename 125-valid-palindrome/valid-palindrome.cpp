class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
             if (!isAlphaNumeric(s[i])) {
                i++;
                continue;
            }
            if (!isAlphaNumeric(s[j])) {
                j--;
                continue;
            }
            char left = toLowerCase(s[i]);
            char right = toLowerCase(s[j]);
            if (left != right) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isAlphaNumeric(char ch) {
        if (ch >= '0' && ch <= '9')
            return true;
        if (ch >= 'A' && ch <= 'Z')
            return true;
        if (ch >= 'a' && ch <= 'z')
            return true;
        return false;
    }
    char toLowerCase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch + 32;
        }
        return ch;
    }
};
