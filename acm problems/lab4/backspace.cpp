class Solution {
public:
    bool backspaceCompare(string S, string T) {
        deque < char > St;
        deque < char > Tt;
        for(char x: S){
            if(x == '#'){
                if(St.empty()){
                    continue;
                }
                St.pop_back();
            }else{
                St.push_back(x);
            }
        }
        for(char x: T){
            if(x == '#'){
                 if(Tt.empty()){
                    continue;
                }
            Tt.pop_back();
            }else{
                Tt.push_back(x);
            }
        }
        if(St == Tt){
            return true;
        }else
            return false;
    }
};