#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
int main() {
    deque<int> colod1;
    deque<int> colod2;
    int n = 0;
    cout << "Enter first colod" << endl;
    for(int i = 0; i < 5; i++){
        cin >> n;
        colod1.push_back(n);
    }
    cout << "Enter second colod" << endl;
    for(int i = 0; i < 5; i++){
        cin >> n;
        colod2.push_back(n);
    }
    int round = 0;
    while (!colod2.empty() || !colod1.empty()){
        if (colod1.back() > colod2.back()){
            if(colod1.back() == 9 && colod2.back() == 0){
                colod2.push_front(colod1.back());
                colod2.push_front(colod2.back());
                colod2.pop_back();
                colod1.pop_back();
                round++;
            }else{
                colod1.push_front(colod2.back());
                colod1.push_front(colod1.back());
                colod2.pop_back();
                colod1.pop_back();
                round++;
            }
        }else if (colod1.back() < colod2.back()){
            if(colod1.back() == 0 && colod2.back() == 9){
                colod1.push_front(colod1.back());
                colod1.push_front(colod2.back());
                colod2.pop_back();
                colod1.pop_back();
                round++;
            }else{
                colod2.push_front(colod2.back());
                colod2.push_front(colod1.back());
                colod2.pop_back();
                colod1.pop_back();
                round++;
            }
        }
        for(int i = 0; i < colod1.size(); i++){
            cout << colod1[i] << ' ';
        }
        cout << endl;
        for(int i = 0; i < colod2.size(); i++){
            cout << colod2[i] << ' ';
        }
        cout <<endl << round <<endl;


    }
//    if (!colod1.empty()){
//        cout << "first" << endl;
//    } else
//        cout << "second" << endl;
//    cout << round;
    return 0;
}
