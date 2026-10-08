class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int>freq(nums.size()+1);
        for(int x: nums){
            if(x > 0 && x <=nums.size()){
                freq[x]=1;
            }
        }
        for(int i=1 ; i<=nums.size(); i++){
            if(freq[i]==0){
                return i;
            }
        }
        return nums.size()+1;
        
    }
};