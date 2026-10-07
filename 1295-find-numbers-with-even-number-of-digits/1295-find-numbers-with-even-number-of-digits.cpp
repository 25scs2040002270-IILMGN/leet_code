class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evD=0;
        
        for(int i=0;i<nums.size();i++){
          int s= to_string(nums[i]).length();

        if( s % 2 ==0){
            evD++;
           }
         else{
            continue;
           }
        }
    return evD;
    }
};