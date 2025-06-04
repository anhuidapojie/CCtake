#include "student.h"
int main(int argc,char const * argv[])
{
    char cmd = 0;
    int arr[10] = {0};
    int capcity = sizeof(arr)/sizeof(arr[0]);
    show_mens();
    while (1)
    {
        cout<<"请选择功能"<<endl;
        cin>>cmd;
        if (cmd == '1')
        {
            cout << "你选择的是功能1，请输入这10个学生的成绩"<<endl;
            add_score(arr,capcity);
        }
        if (cmd == '2')
        {
            cout << "你选择的是功能2，查看学生成绩"<<endl;
            show_score(arr,capcity);
        }

        if (cmd == '3')
        {
            int n;
            cout << "你选择的是功能3，修改学生成绩"<<endl;
            change_score(arr, n);
        }

        if (cmd=='4')
        {
            cout << "你选择的是功能4，学生成绩最大值"<<endl;
            show_max_score(arr,capcity);
        }
        
        if (cmd=='5')
        {
            cout << "你选择的是功能5，学生成绩最小值"<<endl;
            show_min_score(arr,capcity);
        }

        if (cmd=='6')
        {
            cout << "你选择的是功能6，学生成绩优秀率"<<endl;
            excellent_rate(arr,capcity);
        }

        if (cmd=='7')
        {
            cout << "你选择的是功能7，学生成绩优秀率"<<endl;
            agv_score(arr,capcity);
        }
        

        if (cmd=='0')
        {
            cout << "欢迎您下次使用本系统" << endl;
            return 0;
        }
    }
    return 0;
}