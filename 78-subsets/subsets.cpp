
class Solution {
public:
    vector<vector<int>> res;
    vector<int> ans;

    void powerset(vector<int>& nums, int i) {
       
        if (i == nums.size()) {
            res.push_back(ans);
            return;
        }

     ans.push_back(nums[i]);
        powerset(nums, i + 1);

        ans.pop_back();

       powerset(nums, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        powerset(nums, 0);
        return res;
    }
};