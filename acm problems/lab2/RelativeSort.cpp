class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;
        for(int i = 0; i < arr2.size(); ++i){
            for (int j = 0; j < arr1.size(); ++j)
                if(arr1[j] == arr2[i])
                    result.push_back(arr2[i]);
        }
        int m = result.size();
        for(int i = 0; i < arr1.size(); ++i){
            bool flag = false;
            for (int j = 0; j < arr2.size(); ++j)
                if(arr1[i] == arr2[j]){
                    flag = true;
                    break;
                }
            if(!flag)
                result.push_back(arr1[i]);
        }
        sort(result.begin() + m, result.end());
        return result;
    }
};