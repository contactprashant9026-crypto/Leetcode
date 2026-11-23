class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int x : nums){
           mp[x]++;
        }
        int ans =0;

        for(auto x :mp){
            if(x.second ==2){
                ans = ans ^ x.first;
            }
        }
        return ans;
        
    }
};