class Solution {
public:
bool isZero(int n){
            while(n>0){
                if( n% 10 == 0){
                    return false;
                }
                else{
                    n = n/10;
                }
            }
             return true;
}

vector<int> getNoZeroIntegers(int n) {
        int a=1;
        while(a<n){
            int b = n-a;
            if(isZero(a) && isZero(b)){
                return {a,b};
            }
            a++;
        }
        return {};
}
};