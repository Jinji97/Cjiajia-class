#include <iostream>
using namespace std;

int main31(){
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << "第一个元素为:" << arr[0] << endl;

    int *p = arr; //arr就是数组首地址

    cout << "指针访问第一个元素："  << *p << endl;

    p++; //让指针先后偏移
    
    cout << "利用指针访问第二个元素：" << *p << endl;

    cout << "利用指针遍历数组" << endl;

    int *p2 = arr;

    for (int i = 0; i < 10; i ++)
    {
        // cout << arr[i] << endl;
        cout << *p2 << endl;
        p2++;

    }

    return 0;

}