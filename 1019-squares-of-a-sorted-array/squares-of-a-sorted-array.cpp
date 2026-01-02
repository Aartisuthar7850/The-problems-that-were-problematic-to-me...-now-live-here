class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int >ans;
        for(auto x : nums){
            x = x*x;
            ans.push_back(x);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};