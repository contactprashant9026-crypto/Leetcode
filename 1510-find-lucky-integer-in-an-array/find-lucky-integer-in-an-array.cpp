class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n= arr.size();
        unordered_map<int,int>mp;
        for(int x : arr){
            mp[x]++;
        }
       int ans =-1;
        for(auto x : mp){
            if(x.first == x.second){
                ans = max(ans , x.first);
            }
        }
           
        return ans;
    
        

    }
};