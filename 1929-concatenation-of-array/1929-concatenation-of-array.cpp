class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> cp = nums;
    for(int i=0;i<nums.size();i++){
         cp.push_back(nums[i]);
    }
        return cp;
    }
};