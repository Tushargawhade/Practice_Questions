class Solution {
public:
    int findClosest(int x, int y, int z) {
        int ans;

        int a = abs(z-x);
        int b = abs(z-y);


            if(a > b){
                ans = 2;
            }
            else if(a < b){
                ans = 1;
            }
            else{
                ans = 0;
            }
        

        return ans;

        
        
    }
};