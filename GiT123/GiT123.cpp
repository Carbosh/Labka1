// GiT123.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <mmsystem.h>

using namespace std;
#pragma comment(lib, "winmm.lib")
#define PlaySound;
int main()
{
	cout << "1 ������ ��������� �������������";
	cout << "2 11:02:1997";
	cout << "3 ϳ�����";
	cout << "4 ����";
	cout << "5 ����";
	cout << "6 2003� ������� �������";
	cout << "7 2004�. ������� �������";
	cout << "8 �������";
	cout << "9 ϳ�����";
	cout << "10 2012�. ��������� �������� � ��� ����.";
	cout << "11 9 ���� ";
	cout << "12 2014 ��";
	cout << "13 ������� ������ ����'������� ��������� 2014�";
	cout << "14 �������� ������ �� 5 ����";
	cout << "15 2017�";
	cout << "16 ����� �������������� �����";
	cout << "17 ����� 2017";
	cout << "18 ������";
	cout << "19 3-� �����������";
	cout << "20 �����";
	PlaySound("Sound.wav", NULL, SND_FILENAME | SND_ASYNC);
	system("pause");
    return 0;
}

