#ifndef _STUDENT_
#define _STUDENT_

#include <iostream>
using namespace std;

/**
 * 
 * @biref 打印学生管理系统菜单
 * 
*/
void show_mens(void);

/**
 * @brief 添加学生成绩
*/
void add_score(int arr[],int capcity);

/**
 * @brief 展示学生成绩
*/
void show_score(int arr[],int capcity);

/**
 * @brief 修改成绩
*/
void change_score(int arr[],int n);

/**
 * @brief 查看最大值
*/
void show_max_score(int arr[],int capcity);

/**
 * @brief 查看最小值
*/
void show_min_score(int arr[],int capcity);

/**
 * @brief 可以统计这是个学生的优秀率（80分以上为优秀）
*/
void excellent_rate(int arr[],int capcity);

/**
 * @brief agv成绩
*/
void agv_score(int arr[],int capcity);
#endif