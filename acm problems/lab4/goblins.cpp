#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
int main() {
    deque<char> goblins;
    auto iter = goblins.size() / 2 + (goblins.size() % 2);
    vector<string> s;
    int n;
    cin >> n;
    string actions;
    for (int i = 0; i < n; ++i) {
//        cin.ignore( INT_MAX, '\n' );
//        getline(cin,actions);
        cin >> actions;
        s.push_back(actions);
    }
    for (int i = 0; i < s.size(); ++i) {
        cout << s[i][1] << endl;

    }
    int c;
    int p;
    for (int i = 0; i <= s.size() - 1; ++i) {
        if (s[i][0] == '+'){
            goblins.push_back(s[i][1]);
        }
        else if(s[i][0] == '-'){
            c++;
        }
        else if(s[i][0] == '*'){
//            p = goblins.size() / 2 + (goblins.size() % 2);
            char l = s[i][1];
            goblins.insert(iter, l);
        }
    }

    return 0;
}
