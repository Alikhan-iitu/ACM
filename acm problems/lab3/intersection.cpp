class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set < int > a, b;
        vector < int > c;
        for(int x: nums1)
            a.insert(x);
        for(int x: nums2)
            b.insert(x);
        for(int x: a)
            if(b.find(x) != b.end())
                c.push_back(x);
        return c;
    }
};