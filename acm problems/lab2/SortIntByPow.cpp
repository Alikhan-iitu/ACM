class Solution {
public:
    int getKth(int lo, int hi, int k) {
       vector<pair<int, int>> nums(hi - lo + 1);

	for(int i = 0, x = lo; x <= hi; ++i, ++x)
	{
		nums[i] = { getpow(x), x };
	}

	sort(nums.begin(), nums.end());

	return nums[k - 1].second;
    }
    int getpow(int x){
           int count = 0;
        if(x == 1) return 1;
        while(x != 1){
            if(x % 2 == 0) x = x / 2;
            else x = (3 * x) + 1;
            count++;
        }
        
        return count;
    }
};