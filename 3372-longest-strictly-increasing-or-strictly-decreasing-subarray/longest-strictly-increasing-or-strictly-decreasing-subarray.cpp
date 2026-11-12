class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int count =1;
        int cnt =1;
        int ans =1;

        for(int i=1; i<n ;i++){
            if(nums[i] > nums[i-1]){
                count++;
            }
            else{
                 count =1;
            }

            if(nums[i] < nums[i-1]){
                cnt++;
            }
            else {
                cnt = 1;
            }
            ans = max(ans , max(count , cnt));
        }

        return ans;
        
    }
};