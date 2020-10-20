class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int N = nums.size();
        vector<int> left(N,1);
        vector<int> right(N,1);
        vector<int> output(N,1);
       
        for(int i = 1; i < N; i++){
           left[i] = nums[i-1] * left[i-1];
        }
        for(int i = N - 2; i >= 0; i--){
            right[i] = nums[i+1] * right[i+1];
        }
        for(int i = 0; i < N; i++){
            output[i] = left[i] * right[i];
        }
        return output;
    }
};