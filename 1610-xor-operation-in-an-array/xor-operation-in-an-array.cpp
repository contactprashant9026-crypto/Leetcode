class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>v(n);
        int ans=0;
        for(int i = 0; i<n; i++){
            int key=start + 2*i;
            v.push_back(key);
            ans ^=key;
        }
        
        return ans;


        
    }
};