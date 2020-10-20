class Solution {
public:
    void reverseStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 
    string reverseWords(string s) {
        string result;
        int i = 0;
        int n = s.length();
        while(i < n){
            while(i < n && s[i] == ' ')
                i++;
            if(i >= n )
                break;
            int j = i + 1;
            while(j < n && s[j] != ' ')
                j++;
            string sub = s.substr(i, j-i);
            reverseStr(sub);
            if(result.length() == 0)
                result = sub;
            else
                result = result + " " + sub;
            i = j + 1;
        }
        return result;
    }
};