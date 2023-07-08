#include <iostream>
using namespace std;

struct Student
{
    //成员变量
    string name;
    
    int age;

    int score;
}s3;

int main34(){

    //struct关键字可以省略
    //2.1
    struct Student s1;
    s1.name = "张三";
    s1.age = 19;
    s1.score = 100;

    cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;

    //2.2
    struct Student s2 = {"李四", 26, 80};

    cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;

    //2.3  在定义结构体时顺便创建结构体变量
    s3.name = "王五";
    s3.age = 30;
    s3.score = 40;

    cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;



}