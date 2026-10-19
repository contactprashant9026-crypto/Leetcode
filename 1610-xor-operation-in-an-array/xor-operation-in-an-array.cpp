class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>v(n);
        int ans=0;
        for(int i = 0; i<n; i++){
            v.push_back(start+ 2*i);
        }
        for(int x : v){
            ans =ans^x;
        }
        return ans;


        
    }
};