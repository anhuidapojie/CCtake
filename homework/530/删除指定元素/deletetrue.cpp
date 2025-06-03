/*删除数组中所有指定元素 int arr[10] = {1, 1, 5, 1, 3, 5, 1, 3, 5, 7};
要求:
1. 0 是无效元素，仅作为空位置占位使用
2. 删除数组中所有指定元素，例如 删除数据 1，数组
的数据情况
{ 5, 3, 5, 3, 5, 7, 0, 0, 0, 0}
 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[10] = {1, 1, 5, 1, 3, 5, 1, 3, 5, 7};
    int capcity = sizeof(arr) / sizeof(arr[0]);
    cout << "请输入你要删除的元素" << endl;
    int ret = 0;
    cin >> ret;
    int flag = 0;
    for (int i = 0; i < capcity; i++)
    {
        if (arr[i] == ret)
        {
            flag++;
        }
    }
    if (flag != 0)
    {
        for (int i = 9; i >= 0; i--)
        {
            if (arr[i] == ret)
            {
                for (int j = i; j < capcity; j++)
                {
                    arr[j - 1] = arr[j];
                }
                arr[capcity-1]=0;
            }
        }
    }
    else
    {
        cout << "你要删除的元素不存在，无需删除" << endl;
    }

    for (int i = 0; i < capcity; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
