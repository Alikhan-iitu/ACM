class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        vector<double> sum;
        sum.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++)
            sum.push_back(sum.back() + nums[i]);
            double maxAv =  sum[k - 1] * 1.0 / k;
        for(int i = k; i < nums.size(); i++){
            maxAv = max((sum[i] - sum[i - k])* 1.0 / k, maxAv);
        }
             return maxAv;
    }
};