//student.cpp                     �ڴ��ļ��н��к����Ķ���

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include"student.h"            //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
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
