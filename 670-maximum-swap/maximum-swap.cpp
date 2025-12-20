class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.size();

        // last position of each digit (0–9)
        int last[10];
        for (int i = 0; i < n; i++)
            last[s[i] - '0'] = i;

        for (int i = 0; i < n; i++) {
            // try bigger digits from 9 to current+1
            for (int d = 9; d > s[i] - '0'; d--) {
                if (last[d] > i) {
                    // XOR swap (no 3rd variable)
                    s[i] ^= s[last[d]];
                    s[last[d]] ^= s[i];
                    s[i] ^= s[last[d]];
                    
                    return stoi(s);
                }
            }
        }
        return num;
    }
};
