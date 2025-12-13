class Solution {
public:
int tribonacci(int n) {

        if(n==0){
            return 0;
        }if(n==1){
            return 1;
        }
        long a = 0;
        long b = 1;
        long c = 1;
    
        for (int i = 1; i <= n; i++) {
            long d = a + b + c;
            a = b;
            b = c;
            c= d;
        }

       return a;
    }
};