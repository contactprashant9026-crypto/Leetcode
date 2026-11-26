class Solution {
public:
    bool canAliceWin(int n) {
       
        int count =0;
        int m = n;
       for(int i=0; ; i++){
         m = m - 10 +i;
         count ++;
         if(m<0){
            return count%2==0;
        
         }

       }
       return false;
        
    }
};