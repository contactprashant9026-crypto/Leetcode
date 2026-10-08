class Solution {
public:
    string removeDuplicates(string s) {

        stack<char>st;
        
        for(char x: s){

            if(st.empty()){
                st.push(x);
            }

            else if( x==st.top()){
            st.pop();
            }
            else st.push(x);

        }
            string ans;
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }

            int left =0; 
            int right = ans.size()-1;

        while(left<=right){
            int temp=ans[left];
            ans[left]=ans[right];
            ans[right]=temp;
            left++;
            right--;
            
        }
        return ans;
        
    }
};