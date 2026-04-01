class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int freq[128] = {0};

        for(char j : jewels) {
            freq[j] = 1;
        }

        int count = 0;

        for(char s : stones) {
            if(freq[s]) count++;
        }

        return count;
    }
};