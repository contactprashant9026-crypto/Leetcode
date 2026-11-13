class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        for(int x : nums){
           st.insert(x);
        }
        int maxi =0;

        for(int x : st){

            if(st.find(x-1)==st.end()){
                int count =1;
                int curr = x;
                while(st.find(curr +1) != st.end()){
                    curr++;
                    count++;
                }
                maxi  =  max( maxi , count);

            }
        }
        return maxi;
        
    }
};