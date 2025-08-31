class Solution {
public:
    int subtractProductAndSum(int n) {
        int lstdigit = 0;
        int sum = 0;
        int pro = 1;
        while(n>0){
            lstdigit = n%10;

            pro = pro * lstdigit;
            sum = sum + lstdigit;

            n = n/10;
        }
        
        int final = pro - sum ;

        return final;
    }
};