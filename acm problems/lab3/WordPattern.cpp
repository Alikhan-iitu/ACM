class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map < string, char > da;
        unordered_map < char, string > db;
        
        vector < string > words;
        string cur_word = "";
        for(auto x : s) {
            if(x == ' '){
                words.push_back(cur_word);
                cur_word = "";
            }else{
                cur_word += x;
            }
        }
        words.push_back(cur_word);
        
        if(pattern.size() != words.size())
            return false;
        
        for(int i = 0; i < pattern.size(); ++i){
            auto ch = pattern[i];
            auto wr = words[i];
            bool case1 = (da.find(wr) != da.end() && da[wr] == ch);
            bool case2 = (db.find(ch) != db.end() && db[ch] == wr);
            if (case1 && case2){
                continue;
            }else{
                if(da.find(wr) != da.end() || db.find(ch) != db.end()){
                    return false;
                }
                else{
                    da[wr] = ch;
                    db[ch] = wr;
                }
            }
        }
        return true;
    }
};