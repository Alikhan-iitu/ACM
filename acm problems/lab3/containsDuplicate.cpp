class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set < int > used;
        for(int x : nums){
          if(used.find(x) != used.end()) {
              return true;
          }else{
              used.insert(x);
          }
        }
        return false;
    }
};