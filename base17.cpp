//
// Created by Jinji on 2022/6/13.   乘法口诀表
//
#include <iostream>
using namespace std;

int main17(){

    for (int i =1; i <= 9; i++)
    {
//        cout << i << endl;
        for (int j = 1; j <= i; j++)
        {
            cout << j << " * " << i << " = " << j*i << "  ";
        }
        cout << endl;
    }
}