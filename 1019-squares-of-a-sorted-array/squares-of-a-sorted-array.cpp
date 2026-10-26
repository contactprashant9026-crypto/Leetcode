class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         int n = nums.size();
    int left =0; 
    int right =n-1;
    int index = n-1;
    vector<int>v(n);
    while(left <= right){
    if(nums[left] * nums[left] > nums[right] * nums[right]){
       v[index] = nums[left] * nums[left];
        left++;
    }
    else {
       v[index] =  nums[right] * nums[right] ;
        right--;
    }
    index--;
    
    }
     return v;
        
    }
};