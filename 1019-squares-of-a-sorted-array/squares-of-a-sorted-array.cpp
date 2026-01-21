class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int >ans(nums.size());
        int i = 0;
        int j = nums.size()-1;
        int k = j;

        while(i<=j){
           int isquare = nums[i]*nums[i];
            int jsquare = nums[j]*nums[j];

            if(isquare<=jsquare){
                ans[k]=jsquare;
                j--;
                k--;
            }else
            {
                ans[k]=isquare;
                i++;
                k--;
            }
            
        }
        
       return ans;
    }
};