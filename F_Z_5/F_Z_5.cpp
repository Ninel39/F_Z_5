// F_Z_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<Windows.h>
//Написать функцию, которая определяет, является ли «счастливым» шестизначное число.
using namespace std;

int isHappy(unsigned int num)
{
	if (num < 100000 || num > 999999)
		return -1;
	return ((num / 100000) + ((num / 10000) % 10) + ((num / 1000) % 10)) == (((num / 100) % 10) + ((num / 10) % 10) + (num % 10));
}

int main()
{
	int res = isHappy(267456);
	if (res == 1)
		cout << "happy" << endl;
	else if (res == 0)
		cout << "not happy" << endl;
	else
		cout << "error" << endl;
}

