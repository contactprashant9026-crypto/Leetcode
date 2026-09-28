class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;

        int ans =0;
        for(int x : s){
            if( x== '(' ){
                st.push(1);
        
        ans = max(ans, (int)st.size());
            }

            else if(x == ')'){
                st.pop();
            }

       

        }
        return ans;
    }
};