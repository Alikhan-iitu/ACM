class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map < int, int > last_pos;
        for(int i = 0; i < nums.size(); ++i){
            int x = nums[i];
            if(last_pos.find(x) != last_pos.end()){
                int l_pos = last_pos[x];
                if (i - l_pos <= k)
                    return true;
            }
            last_pos[x] = i;
        }
        return false;
    }
};