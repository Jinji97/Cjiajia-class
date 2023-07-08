//
// Created by Jinji on 2022/6/12.
//
#include <iostream>
using namespace std;

int main5(){

  int score = 0;
  cout << "请输入一个分数：" << endl;
  cin >> score;

  cout << "您输入的分数为：" << score << endl;

  if (score > 600){
    cout << "恭喜您考上了985大学" << endl;
  }
  else{
    cout << "未考上一本大学" << endl;
  }

}