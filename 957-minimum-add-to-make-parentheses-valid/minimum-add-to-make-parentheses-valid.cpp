class Solution {
public:
    int minAddToMakeValid(string s) {
        int o=0;
        int req=0;
        for(char ch : s){
            if(ch=='('){
                o++;
            }
            else{
                if(o>0){
                    o--;
                }
                else req++;
            }
        }
        return o + req;

        
    }
};