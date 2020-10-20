#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    queue < string > q[3];
    int c;
    string s;
    while (cin >> c >> s) {
        q[c - 9].push(s);
    }

    for (int i = 9; i <= 11; ++i) {
        while (!q[i - 9].empty()){
            cout << i << ' ' << q[i - 9].front() << endl;
            q[i - 9].pop();
        }
    }
    return 0;
}
