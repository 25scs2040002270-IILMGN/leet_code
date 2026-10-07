class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int dup;
       
        for(int num : nums){
            mp[num]++;
        }
        
        for(int num : nums){
            if(mp[num]>1){
                dup=num;
            }
        }
        return dup;
    }
};