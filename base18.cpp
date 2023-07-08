//
// Created by Jinji on 2022/6/13.
//
#include <iostream>
using namespace std;

int main18(){

    // 出现在switch语句中
//    cout << "请选择副本难度" << endl;
//    cout << "1、普通" << endl;
//    cout << "2、困难" << endl;
//    cout << "3、地狱" << endl;
//
//    int select = 0;
//    cin >> select;
//
//    switch (select)
//    {
//    case 1:
//        cout << "您选择的是普通难度" << endl;
//        break;
//    case 2:
//        cout << "您选择的是困难难度" << endl;
//        break;
//    case 3:
//        cout << "您选择的是地狱难度" << endl;
//        break;
//    default:
//        break;
//    }

    // 出现在循环语句中
//    for (int i = 0; i < 10; i++){
//
//        if (i == 5)
//        {
//            break;
//        }
//        cout << i << endl;
//    }

    // 出现在嵌套循环语句中
    for (int i = 0; i < 10; i ++){
        for (int j = 0 ; j < 10; j++){

            if (j == 5){
                break;
            }

            cout << "* ";
        }
        cout << endl;
    }























}

