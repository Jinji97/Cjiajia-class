//
// Created by Jinji on 2022/6/13.
//
#include <iostream>
using namespace std;

int main15(){
    for (int i = 1; i <= 100; i++){

        if ( i % 7 == 0 || i % 10 == 7 || i / 10 == 7){
            cout << "敲桌子，数字为：" << i << endl;
        }
        else{
            cout << i << endl;
        }

    }
}