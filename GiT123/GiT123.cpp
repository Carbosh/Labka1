// GiT123.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <Mmsystem.h>
#include "resource.h"
#define PlaySound 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "1 ������ ��������� �������������\n";
	cout << "2 11:02:1997\n";
	cout << "3 ϳ�����\n";
	cout << "4 ����\n";
	cout << "5 ����\n";
	cout << "6 2003� ������� �������\n";
	cout << "7 2004�. ������� �������\n";
	cout << "8 �������\n";
	cout << "9 ϳ����\n";
	cout << "10 2012�. ��������� �������� � ��� ����.\n";
	cout << "11 9 ���� \n";
	cout << "12 2014 ��\n";
	cout << "13 ������� ������ ����'������� ��������� 2014�\n";
	cout << "14 �������� ������ �� 5 ����\n";
	cout << "15 2017�\n";
	cout << "16 ����� �������������� �����\n";
	cout << "17 ����� 2017\n";
	cout << "18 ������\n";
	cout << "19 3-� �����������\n";
	cout << "20 �����\n";
	cout << "__________������\n";
	//PlaySound("Sound.wav", NULL, SND_ASYNC);
	//PlaySound("Sound.wav", NULL, SND_FILENAME | SND_ASYNC );
	PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE | SND_ASYNC);
	cout << "__________������\n";
	system("pause");
	return 0;
}

