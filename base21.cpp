//
// Created by Jinji on 2022/6/13.
//
#include <iostream>
using namespace std;

int main21(){

    int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
    cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
    cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
    cout << "数组中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

    cout << "数组首地址为：" << arr << endl;
    cout << "数组中第一个元素地址为：" << &arr[0] << endl;
    cout << "数组中第二个元素地址为：" << &arr[1] << endl;
}