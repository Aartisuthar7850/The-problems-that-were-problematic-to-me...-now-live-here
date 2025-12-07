class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }if(n==1){
            return 1;
        }
        int container1 = 0;
        int container2 = 1;
        for(int i=1;i<=n; i++){
            int container3 = container1 + container2;
            container1=container2;
            container2=container3;
        }
        return container1;
    }
};