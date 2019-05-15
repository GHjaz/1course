/*Верно ли высказывание, что Х принадлежит отрезку [2;5] или [-1;1]?*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>

using namespace std;

void main()
{
	setlocale(0, "rus");
	int x;
	cout << "Введите число Х: " << endl;
	cin >> x;
	int res = 0;
	_asm
	{
		cmp x, 2//сравниваем икс с числом из отрезка
		je L //если x=y, переходим по метке L, иначе идем дальше
		cmp x, 3
		je L
		cmp x, 4
		je L
		cmp x, 5
		je L
		cmp x, -1
		je L
		cmp x, 0
		je L
		cmp x, 1
		je L

		jmp p// если не нашлось число то просто прыгаем на метку р
		L : mov res, 1//если прыгнули на эль, то результат 1
			p :
	}
	cout << "Если Х принадлежит отрезку программа выведет 1, если нет - 0." << endl;
	cout << "Ответ: " << res << endl;
	_getch();

}