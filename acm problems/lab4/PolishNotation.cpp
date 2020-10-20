class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       
        stack < int > st;
        for(int i = 0; i < tokens.size(); ++i){
            cout << tokens[i] << endl;
        }
        for(int i = 0; i < tokens.size(); ++i) {
            if(tokens[i] == "+") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a + b);
            }else if (tokens[i] == "*"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a * b);
            }else if(tokens[i] == "-"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b - a);
            }else if(tokens[i] == "/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b / a);
            }else{
                int x = toint(tokens[i]);
                st.push(x);
            }
        }
        return st.top();
    }
private:
    int toint(string s){
        int res = 0;
        int c = 0;
        for(char x: s){
            if(res == -3){
                c++;
                res = res + 3;
            }
            res = res * 10 + (x - '0');
            
        }
        if(c > 0){
            return res*(-1);
        }else
        return res;
    }
};