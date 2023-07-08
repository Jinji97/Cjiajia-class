//
// Created by Jinji on 2022/6/12.
//
#include <iostream>
using namespace std;
#include <ctime>


int main11(){

    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
//    cout << num << endl;

    int val = 0;

    while(1)
    {
        cin >> val;

        if (val > num) {
            cout << "猜测过大" << endl;
        } else if (val < num) {
            cout << "猜测过小" << endl;
        } else {
            cout << "猜对了！！" << endl;
            break;
        }
    }
}