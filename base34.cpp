#include <iostream>
using namespace std;

struct Student
{
    //��Ա����
    string name;
    
    int age;

    int score;
}s3;

int main34(){

    //struct�ؼ��ֿ���ʡ��
    //2.1
    struct Student s1;
    s1.name = "����";
    s1.age = 19;
    s1.score = 100;

    cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;

    //2.2
    struct Student s2 = {"����", 26, 80};

    cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;

    //2.3  �ڶ���ṹ��ʱ˳�㴴���ṹ�����
    s3.name = "����";
    s3.age = 30;
    s3.score = 40;

    cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;



}