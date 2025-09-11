class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i= 0;
        int n= nums.size();
        while (i < n) {
            int index = nums[i]; 
            if (nums[i] < n && nums[i] != nums[index]) {
                swap(nums[i], nums[index]);
            } else {
                i++;
            }
        }

        // Find missing number
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                return i;  // missing number found
            }
        }

        return n; // if all 0..n-1 are present, missing is n
    }
};