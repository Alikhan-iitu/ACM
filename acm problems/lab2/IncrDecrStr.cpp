class Solution {
public:
    int sum_arry(int* ary)
    {
        int result = 0;
        for(int idx = 0; idx < 26; idx++)
        {
            result = result + (ary[idx]);
        }
        return result;
    }
    string sortString(string s) {
        int s_record[26] = {0};
        string results;
        while(!s.empty())
        {
            s_record[(int)(s.back() - 'a')]++;
            s.pop_back();
        }
        
        while(this->sum_arry(s_record) > 0)
        {
            for(int min_idx = 0; min_idx < 26; min_idx++)
            {
                
                if(s_record[min_idx] > 0)
                {
                    results.push_back('a' + min_idx);
                    s_record[min_idx]--;
                } 
                
            }
            for(int Max_idx = 25; Max_idx >= 0; Max_idx--)
            {
                
                if(s_record[Max_idx] > 0)
                {
                    results.push_back('a' + Max_idx);
                    s_record[Max_idx]--;
                } 
                
            }
        }
        return results;
    }
};