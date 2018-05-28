// GiT123.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <mmsystem.h>

using namespace std;
#pragma comment(lib, "winmm.lib")
#define PlaySound;
int main()
{
	cout << "1 Ламнов Олександр Олександрович";
	cout << "2 11:02:1997";
	cout << "3 Піщанка";
	cout << "4 Мама";
	cout << "5 Папа";
	cout << "6 2003р Першого Вересня";
	cout << "7 2004р. Першого Вересня";
	cout << "8 Скрипка";
	cout << "9 Піаніно";
	cout << "10 2012р. закінчення навчання в муз школі.";
	cout << "11 9 клас ";
	cout << "12 2014 рік";
	cout << "13 Одеский коледж комп'ютерних техгологій 2014р";
	cout << "14 Захистив диплом на 5 балів";
	cout << "15 2017р";
	cout << "16 Курси булгалтерсього обліку";
	cout << "17 Донну 2017";
	cout << "18 Музика";
	cout << "19 3-д моделювання";
	cout << "20 Спорт";
	PlaySound("Sound.wav", NULL, SND_FILENAME | SND_ASYNC);
	system("pause");
    return 0;
}

