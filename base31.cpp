#include <iostream>
using namespace std;

int main31(){
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << "��һ��Ԫ��Ϊ:" << arr[0] << endl;

    int *p = arr; //arr���������׵�ַ

    cout << "ָ����ʵ�һ��Ԫ�أ�"  << *p << endl;

    p++; //��ָ���Ⱥ�ƫ��
    
    cout << "����ָ����ʵڶ���Ԫ�أ�" << *p << endl;

    cout << "����ָ���������" << endl;

    int *p2 = arr;

    for (int i = 0; i < 10; i ++)
    {
        // cout << arr[i] << endl;
        cout << *p2 << endl;
        p2++;

    }

    return 0;

}