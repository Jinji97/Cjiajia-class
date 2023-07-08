//
// Created by Jinji on 2022/6/12.
//
#include <iostream>
using namespace std;

int main7() {

    int score = 0;
    cout << "请输入一个分数：" << endl;
    cin >> score;

    cout << "您输入的分数为：" << score << endl;

    if (score > 600)
    {
      cout << "恭喜您考上了一本大学" << endl;
      if (score > 700)
      {
        cout << "您能考入北京大学" << endl;
      }
      else if (score > 650)
      {
        cout << "您能考入清华大学" << endl;
      }
      else
      {
        cout << "你能考入人民大学" << endl;
      }
    }
    else if (score > 500)
    {
      cout << "恭喜你考上了二本大学" << endl;
    }
    else if (score > 400)
    {
      cout << "您考上了三本大学" << endl;
    }
    else
    {
      cout << "为考上本科大学，继续加油" << endl;
    }
}
