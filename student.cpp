#include "student.h"
void show_mens()
{
    cout << "____________________________________"<<endl;
    cout << "1.请输入这10个学生的成绩" << endl;
    cout << "2.查看10个学生的成绩" << endl;
    cout << "3.请修改某个学生的成绩" << endl;
    cout << "4.查看最好的成绩" << endl;
    cout << "5.请查看最差的成绩" << endl;
    cout << "6.统计咱们班的优秀率" << endl;
    cout << "7.计算这些学生的平均成绩" << endl;
    cout << "0.输入0,退出本系统" << endl;
    cout << "____________________________________" << endl;
}

void add_score(int arr[],int capcity)
{
    for (int i = 0; i < capcity; i++)
    {
        cin>>arr[i];
    }
}

void show_score(int arr[],int capcity)
{
    for (int i = 0; i < capcity; i++)
    {
        cout<<"第"<<i+1<<"位学生成绩是"<<arr[i]<<endl;
    }
}


void change_score(int arr[],int n)
{
    int num;
    cin>>n>>num;
    arr[n] = num;
}


void show_max_score(int arr[],int capcity)
{
    for (int i = capcity-1; i >= 0; i--)
    {
        if (arr[i]>arr[i+1])
        {
            cout<<arr[i]<<endl;
        }
        else
        {
            cout<<arr[i+1]<<endl;
        }
    }
}

void show_min_score(int arr[],int capcity)
{
    for (int i = 0; i < capcity-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            cout<<arr[i+1];
        }
        else
        {
            cout<<arr[i];
        }
        
    }
    
}

// 可以统计这是个学生的优秀率（80分以上为优秀）
void excellent_rate(int arr[],int capcity)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < capcity; i++)
    {
        if (arr[i]<80)
        {
            count+=1;
        }
    }

    for (int i = 0; i < capcity; i++)
    {
        sum+=arr[i];
    }
    cout<<"优秀率为"<<sum/count<<endl;
}

void agv_score(int arr[],int capcity)
{
    int sum=0;
    for (int i = 0; i < capcity; i++)
    {
        sum+=arr[i];
    }
    cout<<sum/capcity<<endl;
}