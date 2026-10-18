class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0){
            return 1;
        }
       
         int ans =10;
         int current =9;
         int nextmultiple =9;

        for(int i=2 ; i<=n && nextmultiple >0 ; i++){
            current = current*nextmultiple;
             ans =ans + current;
            nextmultiple--;
    }
        return ans;
    }
};