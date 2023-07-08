//
// Created by Jinji on 2022/6/13.
//
#include <iostream>
using namespace std;

int main24() {

    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};

    cout << "ÅÅĞòÇ°£º" << endl;
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ¿ªÊ¼Ã°Åİ
    for (int i = 0; i < 9 - 1; i++) {
        for (int j = 0; j < 9 - i - 1; j++)

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    cout << "ÅÅĞòÇ°£º" << endl;
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

