#include <iostream>
using namespace std;

struct Student
{
    //成员变量
    string name;
    
    int age;

    int score;
};

int main35(){
    //结构体数组
    //创建结构体数组
    struct Student stuArray[3] = 
    {
        {"张三", 19, 100},
        {"李四", 25, 90},
        {"王五", 50, 56}
    };
    
    //给结构体数组中的元素赋值
    stuArray[1].name = "小米";
    stuArray[1].age = 70;
    stuArray[1].score = 120;

    //遍历结构体数组
    for (int i = 0; i < 3; i++)
    {
        cout << " 姓名：" << stuArray[i].name << " 年龄：" << stuArray[i].age << " 分数：" << stuArray[i].score << endl;
    }

}
