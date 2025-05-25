// 1.请你编写代码计算2024年5月20日是这一年的第几天
#include <iostream>
using namespace std;
int main()
{
    int num = 31 + 29 + 31 + 30 + 20;
    cout << "2024年5月20日是这一年的第:"<<num<<"天"<< endl;
    return 0;
}
// 2.求余运算，请你编写程序，输入一个整数，输出它除以5，7以后的余数
#include<iostream>
using namespace std;
int main(int argc,const char * argv[])
{
    int a;
    cout<<"请输入一个整数："<<endl;
    cin>>a;
    cout<<a%5<<' '<<a%7<<endl;
    return 0;
}
// 3.数字分离，请你输入一个3位数，依次输出他的百位，十位，个位
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int a;
    cout<<"请输入一个三位数："<<endl;
    cin >> a;
    cout<<"百位："<<a/100<<endl;
    cout<<"十位："<<(a/10)%10<<endl;
    cout<<"个位："<<a%10<<endl;
    return 0;
}
// 4.温度转换，请你自行了解国际温度单位（开尔文）与常用温度单位的关系（摄氏度），然后编写一个代码，实现输入一个摄氏温度，打印出来国际温度
#include <iostream>
using namespace std;
int main() {
    double celsius;
    cout << "请输入摄氏温度(℃): ";
    cin >> celsius;
    double kelvin = celsius + 273.15;
    cout << "国际温度(K): " << kelvin << endl;
    return 0;
}

// 5.时间转换：输入总秒数，转换为小时，分钟和秒的格式输出。例如输入3670，输出1小时1分钟10秒,日期转换  输入一个年月日，判断这是这一年的第几天 
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int seconds;
    cin >> seconds;
    cout << seconds/3600 << "时" << (seconds%3600)/60 << "分" << (seconds%3600)%60<< "秒" <<endl; 
    return 0;
}


#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int year,month,day;
    cin >> year >> month >> day;

    return 0;
}
// 6.几何计算，用户输入圆的半径，程序输出圆的周长和圆的面积
#include <iostream>
using namespace std;
const double pi = 3.1415926;
int main(int argc,char const * argv[])
{
    double r;
    cout<<"请输入半径";
    cin>>r;
    cout<<"圆的周长："<<2*pi*r<<endl;
    cout<<"圆的面积："<<pi*r*r<<endl;
    return 0;
}
// 7.请你编写一个程序，计算20+21+22+23+24+.......+100的和
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    cout<< "20+21+22+23+24+.......+100的和为：" << (20+100)*(100-20+1)/2 <<endl;
    return 0;
}
// 8.请你编写程序，输入两个整数，计算这两个整数之间所有数的和
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int num1,num2;
    cout<< "请输入两个整数";
    cin>>num1>>num2;
    int sum = 0;
    if (num2>num1)
    {
        sum = (num1+num2)*(num2-num1+1)/2-(num1+num2);
        cout<< "两个整数之间所有数的和" << sum <<endl;
    }
    else if (num1>num2)
    {
        sum = (num1+num2)*(num1-num2+1)/2-(num1+num2);
        cout<< "两个整数之间所有数的和" << sum <<endl;
    }
    else if(num1==num2)
    {
        cout<< "两个整数之间所有数的和为0" <<endl;
    }
    else
    {
        cout << "输入不合法请重新输入" <<endl;
    }
    return 0;
}
// 11.请你编写一个程序，输入一个三位数，然后反序输出，例如输入123，输出321
#include<iostream>
using namespace std;
int main(int argc,const char * argv[])
{
    int num,bei,shi,ge;
    cout << "请输入一个三位数:";
    cin>>num;
    bei = num/100;
    shi = (num/10)%10;
    ge = num%10;
    cout<<ge*100+shi*10+bei<<endl;
    return 0;
}
// 12.请你输入一个小写字母，程序运行完后，将他转换成大写字母
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    char a;
    cout<<"请输入一个小写字符:";
    cin>>a;
    if(a<'a' || a>'z')
    {
        cout << "输入无效，请确保输入的是单个小写字母。" << endl;
        return 1; 
    }
    char upper = a -32;
    cout << "转换后的大写字母是: " << upper <<endl;
    return 0; 
}
// 13.输入三个整数，按从小到大的顺序输出
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cout << "输入三个整数" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b) 
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) 
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) 
    {
        int temp = b;
        b = c;
        c = temp;
    }
    cout << "排序后" << a << " " << b << " " << c << " " << endl;
    return 0;
}

// 14.请你写一个代码，判断你定义好的那两个整形变量哪一个较大，并且输出
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int num1,num2;
    cout << "请输入两个整数：";
    cin >> num1 >> num2;
    if (num1>num2)
    {
        cout<<"较大的数是" << num1 <<endl;
    }
    else if(num1<num2)
    {
        cout<<"较大的数是" << num2 <<endl;
    }
    else
    {
        cout<< "一样大" <<endl;
    }
    return 0;
}
// 15.请你写一个代码，给定两个数字，如果num1>num2,将num1和num2进行交换并且输出
#include<iostream>
using namespace std;
int main(int argc,const char * argv[])
{
    int num1,num2;
    cout<< "请输入两个数";;
    cin>>num1>>num2;
    if (num1>num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    cout<<num1<<" "<<num2<<endl;
    return 0;
}

// 16.请你判断一个给定的数是奇数还是偶数
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num=0;
    cout<<"请输入你要判断的数"<<endl;
    cin>>num;
    if (num%2==0)
    {
        cout<<"是偶数"<<endl;
    }
    else
    {
        cout<<"是奇数"<<endl;
    }
    return 0;
}
// 17.请你设计一个快递收费系统，如果重量低于1kg，那么在首重范围内，不额外缴费，只收5快，如果超重了，那么按照超出每公斤，多收费1元的标准收费
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int weight;
    cout << "请输入快递重量:" << endl;
    cin >> weight;
    int price = 5;
    if (weight <= 1)
    {

        cout << "运费为:" << price << endl;
    }
    else
    {
        cout << "运费为:" << 5 + weight - 1 << endl;
    }
    return 0;
}
// 18.请你写一个点菜系统 要求：需要有8道菜在点菜之前需要有欢迎词欢迎词后需要展示
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    cout<<"欢迎光临本餐厅！祝您用餐愉快"<<endl;
    cout<<"以下是我们的菜单："<<endl;
    char dish[8][20] = {"红烧肉","宫保鸡丁","鱼香肉丝","清蒸鲈鱼","麻婆豆腐","蒜蓉西兰花","糖醋里脊","西红柿炒鸡蛋"};
    double pricle[] = {38.0,32.0,28.0,68.0,22.0,18.0,35.0,20.0};
    cout<<"1."<< dish[0]<<"---- ￥"<< pricle[0]<<endl;
    cout<<"1."<< dish[1]<<"---- ￥"<< pricle[1]<<endl;
    cout<<"1."<< dish[2]<<"---- ￥"<< pricle[2]<<endl;
    cout<<"1."<< dish[3]<<"---- ￥"<< pricle[3]<<endl;
    cout<<"1."<< dish[4]<<"---- ￥"<< pricle[4]<<endl;
    cout<<"1."<< dish[5]<<"---- ￥"<< pricle[5]<<endl;
    cout<<"1."<< dish[6]<<"---- ￥"<< pricle[6]<<endl;
    cout<<"1."<< dish[7]<<"---- ￥"<< pricle[7]<<endl;
    return 0;
}
// 19.请你写一个代码，帮助我来判断一个年份是不是闰年（闰年条件自行搜索），可以直接确定年份，也可以利用cin输入
#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    int year = 0;
    cout << "请输入年份" << endl;
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << "闰年" << endl;
    }
    else
    {
        cout << "平年" << endl;
    }
    return 0;
}


// 20.请你判断一个给定的字符是不是数字字符
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "请输入一个字符: ";
    cin >> ch;
    if (ch >= '0' && ch <= '9') {
        cout << "输入的字符是一个数字字符。\n";
    } else {
        cout << "输入的字符不是一个数字字符。\n";
    }
    return 0;
}


#include<iostream>
#include<cctype>
using namespace std;
int main(int argc,const char * argv[])
{
    char num;
    cout << "请输入一个数字字符: ";
    cin>>num;
     if (isdigit(num))
    {
        cout<< "输入的字符是一个数字字符。"<<endl;
    }
    else
    {
        cout<< "输入的字符不是一个数字字符。"<<endl;
    }
    return 0;
}
// 21.请你判断给定的一个字符是大写字母还是小写字母
#include<iostream>
using namespace std;
int main(int argc,const char * argv[])
{
    char ch;
    cout<<"请输入一个字符: "<<endl;
    cin>>ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout<<"输入的字符是大写字母"<<endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "输入的字符是小写字母。"<<endl;
    }
    else
    {
        cout <<"既不是大写字符也也不是小写字符"<<endl;
    }
    return 0;
}
// 22.请你输入三角形的三条边，判断他能不能组成一个三角形，如果能，再判断一下是普通三角形还是等腰三角形还是等边三角形
#include<iostream>
using namespace std;
int main(int argc,const char * argv[])
{
    while(1)
    {
        double a,b,c;
        cin>>a>>b>>c;
        if (a+b>c && a+c>b && b+c>a)
        {
            cout<<"能组成一个三角形"<<endl;
            if(a == b && b == c)
            {
                cout<<"等边三角形"<<endl;
            }
            else if (a==b || a==c || b==c){
                cout<<"等腰三角形"<<endl;
            }
            else
            {
                cout<<"普通三角形"<<endl;
            }
        }
        else
        {
            cout<<"不能组成一个三角形"<<endl;
        }
    }
    return 0;
}
// 23.一元二次方程求解：输入a、b、c三个系数，求解ax²+bx+c=0的根（考虑判别式大于0、等于0和小于0的情况）

// 24.输入两个整数和一个运算符（+、-、*、/），输出运算结果（考虑除数为0的情况）
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int a,b;
    char op;
    cout<< "请输入两个整数和一个运算符：";
    cin >> a >> op >>b;
    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        if(b!=0)
        {
            cout<<a/b;
        }
        else
        {
            cout<<"除数不能为零"<<endl;
        }
        break;
    default:
        break;
    }
    return 0;
}
// 25.输入年份和月份，输出该月的天数（考虑闰年2月）
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int year,month;
    cout<< "请输入年份和月份：";
    cin>>year>>month;
    if(1<month && month<=12)
    {
        if (month%2!=0)
        {
            cout<< "该月有31天"<<endl;
        }
        else if (month%2==0)
        {
            if (month==2)
            {
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                {
                    cout<<"该月有29天"<<endl;
                }
                else
                {
                    cout<<"该月有28天"<<endl;
                }
            }
            else
            {
                cout<< "该月有30天"<<endl;
            }
        }
    }
    else
    {
        cout <<"请输入正确月份"<<endl;
    }
    return 0;
}
// 26.输入一个年，月，日，判断这是这一年的第几天
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int year,month,day;
    cout<< "请输入年，月，月：";
    cin>>year>>month>>day;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        int count [] = {31,29,31,30,31,30,31,30,31,30,31,30};
        int sum = 0;
        for(int i = 0;i<month-1;i++)
        {
            sum = sum+count[month];
        }
        cout<< "这是这一年的第"<< sum+day <<"天"<<endl;
    }
    else
    {
        int count [] = {31,28,31,30,31,30,31,30,31,30,31,30};
        int sum = 0;
        for(int i = 0;i<month-1;i++)
        {
            sum = sum+count[month];
        }
        cout<< "这是这一年的第"<< sum+day <<"天"<<endl;
    }
    return 0;
}
// 27.输入年、月、日，判断该日期是否有效（是否存在）（考虑不同月份的天数和闰年情况）。
// 跳过



// 29.计算学生成绩等级题目：输入分数（0~100），输出等级：90~100：A80~89：B 70~79：C 60~69： D<60：E
#include <iostream>
using namespace std;
int main(int argc,char const * argv[]) {
    int score;
    cout << "请输入分数（0~100）：";
    cin >> score;
    char grade;
    if (score >= 90 && score <= 100) {
        grade = 'A';
    } else if (score >= 80 && score < 90) {
        grade = 'B';
    } else if (score >= 70 && score < 80) {
        grade = 'C';
    } else if (score >= 60 && score < 70) {
        grade = 'D';
    } else if (score >= 0 && score < 60) {
        grade = 'E';
    } else {
        cout << "无效的分数。" << endl;
        return 1;
    }
    cout << "成绩等级：" << grade << endl;
    return 0;
}
// 30.打印 9x9 乘法表
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    for(int i = 1;i<=9;i++)
    {
        for (int j = 1; j<= i; j++)
        {
            cout<<j<<"X"<<i<<"=";
            if (i*j<10)
            {
                cout<<" ";
            }
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// 31.输入一个整数 n，判断它是否是素数（只能被 1 和自身整除）
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int n;
    cout<< "请输入一个素数：";
    cin >> n;
    if (1>=n)
    {
        cout << "不是素数";
        return 0;
    }
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            cout << n << " 不是素数" << endl;
            return 0;
        }
    }
    cout << n << "是素数" << endl;
    return 0;
}
//32.输入一个整数n，输出 2-n之间的所有质数全部输出
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int n;
    cout<< "请输入一个整数：";
    cin >> n;
    if (n < 2) {
        cout << "没有质数在范围 [2, " << n << "]" << endl;
        return 0;
    }
    for (int i = 2; i<=n; ++i)
    {
        for (int j = 2; j * j<=i; ++j)
        {
            if (n % i == 0)
            {
                
            }
        }
    }
    cout << endl;
    return 0;
}
//33.输入一个整数，统计它的位数（如 1234 → 4）
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int n;
    cout << "请输入一个整数：";
    cin >> n;
    if (n<0)
    {
        n = -n;
    }
    int count = 0;
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n>0)
        {   
            n=n/10;
            count++;
        } 
    }
    cout << "该整数的位数是: " << count << endl;
    return 0;
}
//34.输入 n，输出斐波那契数列的前 n 项（1, 1, 2, 3, 5, 8...）
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int n,a=0,b=1,t;
    cout<< "请输入要输出的斐波那契数列项数:";
    cin >> n;
    if (n==1)
    {
        cout<<b;
    }
    if (n>=2)
    {
        cout<<b;
        for (int i = 1; i < n; i++)
        {
            t = a+b;
            a = b;
            b = t;
            cout<<t<<endl;
        }
    }
    return 0;
}

// 35.输入一个整数，输出它的反转数字（如 1234 → 4321）
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int n;
    cout << "请输入一个整数:";
    cin >> n;
    int res = 0;
    while (n>0)
    {
        res = res*10+n%10;
        n/=10;
    }
    cout<<res;
    return 0;
}
//36.输入一个整数 n（1 ≤ n ≤ 9），打印如下数字金字塔（不允许使用数组或字符串存储中间结果）。
// 例如：输入5
// 打印
//     1
//    121
//   12321
//  1234321
// 123454321
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int n;
    cout<< "请输入一个整数：";
    cin>> n;
    if (1<=n && n<=9)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n-i; ++j)
            {
                cout<< " ";
            }
            for (int j = 1; j<=i; ++j)
            {
                cout<<j;
            }
            for (int j = i-1; j>=1; --j)
            {
                cout<<j;
            }
        }
        cout<<endl;
    }
    else
    {
        cout<<"请输入1 ~ 9之间的数";
    }
    return 0;
}

// 37.输入一个四位二进制数（如 1101），输出对应的十进制数

// 38.请你写一个代码，打印1-100之间所有时3的倍数的数字
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    for (int i = 1; i <=100; i++)
    {
        if (i%3==0)
        {
            cout<<i<<endl;
        }      
    }
    return 0;
}
// 39.请你写一个代码，计算0~100中所有奇数的和
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int sum = 0;
    for (int i = 0; i < 100; ++i)
    {
        if (i%2!=0)
        {
            sum+=i;
        }
    }
    cout<<"0-100之间奇数的和为"<<sum<<endl;
    return 0;
}
// 40.请你写一个代码，计算0~100中所有偶数的和
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int sum = 0;
    for (int i = 0; i <= 100; ++i)
    {
        if (i%2==0)
        {
            sum+=i;
        }
    }
    cout<<"0-100之间偶数的和为"<<sum<<endl;
    return 0;
}
// 41.请你写一个程序数一下，1-100之间的所有整数中，9一共出现了几次（友情提示，9，19，99中都含有9，而且99中有两个9）
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int n = 0;
    for (int i = 1;i<=100;++i)
    {
        if (i%10==9)
        {
            cout<<i<<endl;
            n++;
        }
    }
    cout<< "9一共出现了"<<n+1<<"次"<<endl;
    return 0;
}
// 42.请你设计程序，打印1+2+3+4......+100的和
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int sum;
    for (int i = 1; i <= 100; i++)
    {
        sum+=i;  
    }
    cout<< "1+2+3+4......+100的和为:"<< sum <<endl;
    return 0;
}

// 43.请你设计程序，打印1-2+3-4+5........+99-100的和，并且打印出结果
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 1; i <= 100; ++i)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    cout << "1 - 2 + 3 - 4 + 5 - ... + 99 - 100 的和为 " << sum << endl;
    return 0;
}
// 43.1请你在屏幕上打印以下形状
// *****
// *****
// *****
// *****
// *****
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int i = 1;
    while (i<=5)
    {
        cout<<"*****"<<endl;
        i++;
    }
    return 0;
}
// 44请你设计一个程序，这个程序可以根据输入的整数n，来生成一个n行n列的*矩阵，
// 例如：输入3，打印以下结果
// ***
// ***
// ***
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int n;
    cout<< "请输入一个整数：";
    cin>>n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// 45.请你设计一个程序，打印以下形状
// *
// **
// ***
// ****
// *****
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    cout<< "请输入一个整数：";
    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// 46请你设计一个程序，这个程序可以根据输入的整数n，来生成一个n行的阶梯型*图，
// 例如：输入3，打印以下结果
// *
// **
// ***
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int n;
    cout<< "请输入一个整数：";
    cin>>n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// 47请你设计一个程序，在屏幕上打印以下图形
// A****
// *A***
// **A**
// ***A*
// ****A
#include <iostream>
using namespace std;
int main(int argc,char const * argv[])
{
    int n;
    cout<< "请输入一个整数：";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1;j <=n; ++j)
        {
            if (i==j)
            {
                cout<<"A";
            }
            else
            {
                cout << "*";
            }
        }
        cout<< endl;
    }
    return 0;
}



// 14.输入一个四位二进制数（如 1101），输出对应的十进制数
#include <iostream>
using namespace std;
int main() {
    char binary[5];  // 4位 + 1个结束符 '\0'

    cout << "请输入一个四位二进制数：";
    cin >> binary;
    // 检查长度是否为4
    int i = 0;
    while (binary[i] != '\0') ++i;
    if (i != 4) {
        cout << "输入错误：必须输入4位二进制数！" << endl;
        return 1;
    }

    // 检查每一位是否为 '0' 或 '1'
    for (int j = 0; j < 4; ++j) {
        if (binary[j] != '0' && binary[j] != '1') {
            cout << "输入错误：只能包含 0 或 1！" << endl;
            return 1;
        }
    }
    // 转换为十进制
    int decimal = 0;
    for (int j = 0; j < 4; ++j) {
        decimal = decimal * 2 + (binary[j] - '0');  // 核心转换逻辑
    }
    cout << "对应的十进制数是：" << decimal << endl;
    return 0;
}