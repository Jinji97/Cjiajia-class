#include <iostream>
using namespace std;

struct Student
{
    //��Ա����
    string name;
    
    int age;

    int score;
};

int main35(){
    //�ṹ������
    //�����ṹ������
    struct Student stuArray[3] = 
    {
        {"����", 19, 100},
        {"����", 25, 90},
        {"����", 50, 56}
    };
    
    //���ṹ�������е�Ԫ�ظ�ֵ
    stuArray[1].name = "С��";
    stuArray[1].age = 70;
    stuArray[1].score = 120;

    //�����ṹ������
    for (int i = 0; i < 3; i++)
    {
        cout << " ������" << stuArray[i].name << " ���䣺" << stuArray[i].age << " ������" << stuArray[i].score << endl;
    }

}
