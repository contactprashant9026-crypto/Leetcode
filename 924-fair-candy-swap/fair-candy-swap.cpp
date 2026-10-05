class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {

        int sum1=0;
        int sum2=0;
        for(int x : aliceSizes){
            sum1 +=x;
        }

        for(int x: bobSizes){
            sum2 +=x;
        }

        int diff = (sum1-sum2)/2;

        unordered_set<int>st;

        for(int x : bobSizes){
            st.insert(x);
        }

        for( int x : aliceSizes){
            int b = x - diff;

            if(st.count(b)){
                return {x,b};
            }
        }
        return {};


    }
};