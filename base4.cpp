//
// Created by Jinji on 2022/6/12.  if语句
//
#include <iostream>
using namespace std;

int main4(){

  int score = 0;
  cout << "请输入一个分数：" << endl;
  cin >> score;

  cout << "您输入的分数为：" << score << endl;

  if (score > 700){
    cout << "恭喜您考上了985大学" << endl;
  }
}