class Solution {
public:
    string reverseWords(string s) {
    vector<string> words;
    string word = "";

    // Traverse using range-based loop
    for (auto ch : s) {
        if (ch != ' ') {
            // build current word
            word += ch;
        } 
        else if (!word.empty()) {
            // space mila + word ready
            words.push_back(word);
            word = "";
        }
    }

    // last word (agar string space pe end nahi hui)
    if (!word.empty()) {
        words.push_back(word);
    }

    // reverse words
    reverse(words.begin(), words.end());

    // join words
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1)
            result += " ";
    }

    return result;
}
};