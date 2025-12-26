class Solution {
public:
    int strStr(string haystack, string needle) {

        int i = 0; 
        int j = 0; 

        while (i < haystack.length()) {

            if (haystack[i] == needle[j]) {
                i++;
                j++;
            } else {
              
                i = i - j + 1;
                j = 0;
            }

            
            if (j == needle.length()) {
                return i - j;
            }
        }

        return -1;
    }
};
