class NumArray {
public:
    NumArray(vector<int>& nums) {
        sum.push_back(0);
        for(int i : nums){
            sum.push_back(sum.back() + i);
        }       
    }
    
    int sumRange(int i, int j) {
        return sum[j+1] - sum[i];
    }
    private:
        vector<int> sum;
};

/**
 * Your NumArray object will be in  stantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */