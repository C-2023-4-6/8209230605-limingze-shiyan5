//student.cpp                     在此文件中进行函数的定义

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include"student.h"            //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{

    cout << "number:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int n, const char* na, char s)
{
    num = n;
    strcpy (name, na);
    sex = s;
}
