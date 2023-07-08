//
// Created by Jinji on 2022/6/12.
//
#include <iostream>
using namespace std;

int main13(){

    int num = 100;
    do
    {
        int a = 0;
        int b = 0;
        int c = 0;

        a = num % 10;
        b = num / 10 % 10;
        c = num / 100;

        if (a*a*a + b*b*b + c*c*c == num)
        {
            cout << "水仙花数为：" << num << endl;
        }
        num ++;
    }while (num < 1000);
}