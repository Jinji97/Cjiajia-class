//
// Created by Jinji on 2022/6/12.
//
#include <iostream>
using namespace std;

int main3(){
  // 前置递增
  int a = 10;
  ++a;
  cout << "a = " << a << endl;
  // 后置递增
  int b = 10;
  b++;
  cout << "b = " << b << endl;

  //前置递增
  int a2 = 10;
  int b2 =  ++a2 * 10;
  cout << "a2 = " << a2 << endl;
  cout << "b2 = " << b2 << endl;

  // 后置递增
  int a3 = 10;
  int b3 = a3++ * 10;
  cout << "a3 = " << a3 << endl;
  cout << "b3 = " << b3 << endl;



}