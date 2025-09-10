class Solution {
public:
    long long fib(int n) {
        if (n==0){
            return 0;
        }
        if (n==1) {
            return 1;
        }

        long long prev1= 0, prev2= 1;

        for (int i= 2; i<= n; i++) {
            long long curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }
        return prev2;
    }
};