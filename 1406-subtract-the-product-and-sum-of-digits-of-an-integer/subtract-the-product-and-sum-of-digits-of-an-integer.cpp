class Solution {
public:
    int subtractProductAndSum(int n) {
        int addition = 0;
        int product = 1;
        while(n){
            int digit = n %10;
            addition+=digit;
            product*= digit;
            n/=10;
        }
        return product - addition;
        
    }
};