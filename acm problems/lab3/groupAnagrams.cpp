class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map < string, vector < string > > d;
        for(auto x : strs){
            string key = x;
            sort(key.begin(), key.end());
            d[key].push_back(x);
        }
        vector < vector < string  > > ans;
        for(auto x : d){
            auto key = x.first;
            auto value = x.second;
            ans.push_back(value);
        }
        return ans;
    }
};