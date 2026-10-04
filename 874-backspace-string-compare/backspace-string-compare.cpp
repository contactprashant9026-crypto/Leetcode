class Solution {
public:
    bool backspaceCompare(string s, string t) {

        string ans;
        string uttr;

        for(char ch : s){
            if(ch =='#'){
                if(!ans.empty()){
                ans.pop_back();
            }
            }
            else ans.push_back(ch);
        }
        for(char ch : t){
            if(ch =='#'){
                if(!uttr.empty()){
                uttr.pop_back();
            }
            }
            else uttr.push_back(ch);
        }

        if(ans == uttr){
            return true;
        }
        else return false;

        
    }
};