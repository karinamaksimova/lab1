// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include <locale>;
#include "windows.h";
using namespace std;


void main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "1.ПІБ: Максімова Каріна Сергіївна\n";
	cout << "2.Дата народження: 26.06.1997" << endl;
	cout << "3.Місце народження: смт.Вовковинці" << endl;
	cout << "4.Місце навчання: ДонНУ" << endl;
	cout << "5.Зайнятість: студент" << endl;
	cout << "6.Хобі: Малювати" << endl;
	cout << "7.Улюблений вид спорту: Легка атлетика" << endl;
	cout << "8.Улюблений жанр фільму: Трилер" << endl;
	cout << "9.Пора року: Весна" << endl;
	cout << "10.Колір: Синій" << endl;
	cout << "11.Улюблене місто: Вінниця" << endl;
	cout << "12.Улюблений жанр музики: поп-музика" << endl;
	cout << "13.Ріст: 169" << endl;
	cout << "14.Колір очей: Сірий" << endl;
	cout << "15.Улюблений актор: Джим Керрі" << endl;
	cout << "16.Улюблений письменник: Ельчін Сафарлі" << endl;
	cout << "17.Улюблена домашня тварина: Собака" << endl;
	system("pause");
}

