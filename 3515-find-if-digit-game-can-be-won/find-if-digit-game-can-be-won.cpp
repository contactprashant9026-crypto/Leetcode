class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }

         int ans1 =0;
         int ans2 = 0;

        for(int i=0; i<n; i++){
            int count =0;
            int cnt =0;
           
            int num = nums[i];
            while(num>0){
                num = num /10;
                count++;

            }
            if(count ==1){
                ans1 += nums[i];
            }
            if(count == 2){
                ans2+= nums[i];
            }
        }
        if(ans1 > sum - ans1  || ans2 > sum - ans2){
            return true;
        }
        else return false;
        
    }
};