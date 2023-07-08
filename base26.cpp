#include <iostream>
using namespace std;

int main26(){
    int a = 10;
    int *p;
    
    p = &a;
    cout << "a的地址为：" << &a << endl;
    cout << "指针p为：" << p << endl; 

    *p = 5200;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
}