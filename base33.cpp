#include <iostream>
using namespace std;

void bubbleSort(int *arr, int len)    // 参数1  数组的首地址     参数二   数组长度
{
    for(int i = 0; i < len - 1; i++)
    {
        for(int j =0; j < len - i - 1; j++)
        {
            //如果j > j+1的值  交换数字
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }

}

void printArray(int *arr, int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}



int main33(){

    int arr[10] = { 4,3,6,9,1,2,10,8,7,5};

    int len = sizeof(arr) / sizeof(arr[0]);
    //创建函数，实现冒泡排序
    bubbleSort(arr, len);

    //打印排序后的数组
    printArray(arr, len);


}