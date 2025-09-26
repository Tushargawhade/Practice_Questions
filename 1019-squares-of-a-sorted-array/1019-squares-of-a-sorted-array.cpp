class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> ans(n);

        int low = 0, high = n - 1;

        int k = n - 1; 

        while (low <= high) {
            if (abs(nums[low]) > abs(nums[high])) {
                ans[k] = nums[low] * nums[low];
                low++;
            } else {
                ans[k] = nums[high] * nums[high];
                high--;
            }
            k--;
        }

        return ans;
    }
};
