class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n= nums.size();
      
        int maxsum = 0;
        int minsum =0;
        int currmax =0;
        int currmin =0;

        for(int i=0; i<n; i++){
            
        currmax += nums[i];
            if( currmax < 0){
                currmax = 0;
            }
            currmin +=nums[i];
            if( currmin > 0){
                currmin =0;
            }
             maxsum = max(currmax ,maxsum);
            
            minsum = min (currmin , minsum);
            
        }
        return max( maxsum , abs(minsum));
       
    }
};