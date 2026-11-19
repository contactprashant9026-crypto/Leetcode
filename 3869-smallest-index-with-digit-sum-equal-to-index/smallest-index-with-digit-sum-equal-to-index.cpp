class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int var = nums[i];
            int sum =0;
            while(var >0){
                int rem = var%10;
                sum = sum + rem;
                var = var/10;
            }
            if(sum == i){
                return i;
                break;
            }
        }
        return -1;
        
    }
};