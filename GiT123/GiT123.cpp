// GiT123.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "resource.h"
#include <iostream>
#include <windows.h>
#include <Mmsystem.h>
#define PlaySound 

using namespace std;
int main()
{
	PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE | SND_ASYNC);
	setlocale(LC_ALL, "Russian");
	cout << "1 Ламнов Олександр Олександрович\n";
	cout << "2 11:02:1997\n";
	cout << "3 Піщанка\n";
	cout << "4 Мама\n";
	cout << "5 Папа\n";
	cout << "6 2003р Першого Вересня\n";
	cout << "7 2004р. Першого Вересня\n";
	cout << "8 Скрипка\n";
	cout << "9 Піаніно\n";
	cout << "10 2012р. закінчення навчання в муз школі.\n";
	cout << "11 9 клас \n";
	cout << "12 2014 рік\n";
	cout << "13 Одеский коледж комп'ютерних техгологій 2014р\n";
	cout << "14 Захистив диплом на 5 балів\n";
	cout << "15 2017р\n";
	cout << "16 Курси булгалтерсього обліку\n";
	cout << "17 Донну 2017\n";
	cout << "18 Музика\n";
	cout << "19 3-д моделювання\n";
	cout << "20 Спорт\n";
	cout << "__________МУЗИКА\n";
	//PlaySound("Sound.wav", NULL, SND_ASYNC);
	//PlaySound("Sound.wav", NULL, SND_FILENAME | SND_ASYNC );

	cout << "__________МУЗИКА\n";
	system("pause");
	return 0;
}

