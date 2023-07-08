//
// Created by Jinji on 2022/6/13.  小猪称体重
//
#include <iostream>
using namespace std;

int main22(){

    int arr[5] = {300, 350, 150, 400, 250};

    int max = 0;
    for (int i = 0; i < 5; i++){

        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << "最终的小猪体重为：" << max << endl;
}