class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int m= position.size();
        unordered_map<int,int>mp;
        for(int x : position){
            mp[x]++;
        }

       
        int even= 0;
        int odd =0;

        for(auto x : mp){
            if(x.first %2 ==0){
                even += x.second ;
            }
            else odd +=x.second ;
        }

        return min(even,odd);
        
        
    }
};