class Solution {
public:
    int reverse(int x) {
        int lstdigit;
        long long sum =0;
        while(x!=0){
            lstdigit = x%10;
            sum = sum * 10 + lstdigit;
            x = x/10;
        }    


        if(sum < INT_MIN || sum> INT_MAX){
            return 0;
        }
        return  (int)sum;


    }
};