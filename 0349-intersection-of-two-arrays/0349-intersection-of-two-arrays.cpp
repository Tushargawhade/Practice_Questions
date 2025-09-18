class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> arr(nums1.begin(),nums1.end());
        unordered_set<int> ans;

        for(int n: nums2){
            if(arr.count(n)){
                ans.insert(n);
            }
        }
        return vector<int>(ans.begin(),ans.end());
        
    }
};