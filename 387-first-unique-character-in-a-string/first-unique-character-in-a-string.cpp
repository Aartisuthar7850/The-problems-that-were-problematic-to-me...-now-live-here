class Solution {
public:
    int firstUniqChar(string s) {
    int n = s.length();

    for (int i = 0; i < n; i++) {
        bool repeat = false;
        for (int j = 0; j < i; j++) {
            if (s[j] == s[i]) {
                repeat = true;
                break;
            }
        }
        for (int j = i + 1; j < n && !repeat; j++) {
            if (s[j] == s[i]) {
                repeat = true;
                break;
            }
        }

        if (!repeat)
            return i;
    }
    return -1;
}

};