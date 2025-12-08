class Solution {
public:
    int sumsqofdigits(int n) {
        int sum = 0;
        while (n) {
            sum = sum + ((n % 10) * (n % 10));
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        while (n > 4) {
            n = sumsqofdigits(n);
            cout << n << "/n";
        }
        if (n == 1)
            return true;
        else
            return false;
    }
};