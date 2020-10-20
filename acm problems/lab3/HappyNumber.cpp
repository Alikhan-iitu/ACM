class Solution {
public:
    bool isHappy(int n) {
        unordered_set < int > used;
        used.insert(n);
        while (n != 1) {
            int res = 0;
            while (n > 0) {
                res += (n % 10) * (n % 10);
                n /= 10;
            }
            n = res;
            if (used.find(n) != used.end())
                return false;
            else
                used.insert(n);
        }
        return true;
    }
};