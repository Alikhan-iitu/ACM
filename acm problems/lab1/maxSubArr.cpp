class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         vector<int> table;
   table.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            table.push_back(max(table.back() + nums[i], nums[i]));
        }
        sort(table.begin(), table.end());
        return table.back();
    }
};  