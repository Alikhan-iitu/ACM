class Solution {
public:
    bool isValid(string s) {
        stack < char > st;
        for(char x: s){
            if(x == '(' || x == '[' || x == '{'){
                if(x == '(')
                    st.push(')');
                if(x == '[')
                    st.push(']');
                if(x == '{')
                    st.push('}');
            }else if (st.empty() || st.top() != x) {
                return 0;
            }else {
                st.pop();
            }
        }
        if (st.empty())
            return true;
        else 
            return false;
    }
};