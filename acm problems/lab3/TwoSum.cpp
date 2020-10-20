class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map < int, int > d;
        for(int j = 0; j < nums.size(); ++j){
            int x = target - nums[j];
            if(d.find(x) != d.end()) {
                int i = d[x];
                vector < int > ans{i, j};
                return ans;
            }else{
                d[nums[j]] = j;
            }
        }
        vector < int > ans;
        return ans;
    }
};