//
// Created by Jinji on 2022/6/12.
//
#include <iostream>
using namespace std;

int main8(){

  int num1 = 0;
  int num2 = 0;
  int num3 = 0;

  cout << "请输入小猪A的重量" << endl;
  cin >> num1;
  cout << "请输入小猪B的重量" << endl;
  cin >> num2;
  cout << "请输入小猪C的重量" << endl;
  cin >> num3;

  cout << "小猪A的体重为：" << num1 << endl;
  cout << "小猪B的体重为：" << num2 << endl;
  cout << "小猪C的体重为：" << num3 << endl;

  if (num1 > num2) {
    if (num1 > num3) {
      cout << "小猪A最重，重量为：" << num1 << endl;
    } else {
      cout << "小猪C最重，重量为：" << num3 << endl;
    }
  }
  else
  {
    if (num2 > num3)
    {
      cout << "小猪B最重，重量为：" << num2 << endl;
    }
    else
    {
      cout << "小猪C最重，重量为：" << num3 << endl;
    }
  }
}






