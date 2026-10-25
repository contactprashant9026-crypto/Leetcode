class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0 ; 
        int maxsum = nums[0];
        for( int x : nums){
            sum += x;
            maxsum = max(maxsum , sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return maxsum;
        
    }
};