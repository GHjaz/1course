/*3.Определить, является ли число N простым*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>

using namespace std;

void main()
{
	setlocale(0, "rus");
	int n;
	cout << "Введите число, требующее проверки: " << endl;
	cin >> n;
	int res = 0;
	_asm
	{
		//mov  eax, n
		mov  ebx, 0// обнуляем ебикс 
		mov  ecx, 1//i=1 ецикс вместо индекса и пишем туда 1


		L1:
		mov  eax, n// закидывем в еаикс эн 
			cmp ecx, eax// сравнимаем эн и и 
			jg L2//если i>n (ecx>eax) перехоидм в L2

			mov edx, 0//остаток=0
			div ecx// деление эн на и 
			inc ecx//i++
			cmp edx, 0
			jne L1 //едэикс не равен нулю, то переходим в начало цикла

			add ebx, 1// к ебикс прибавляем 1 

			jmp L1
			L2 :
		mov res, ebx// в результат заносим ебикс 


	}

	cout << "Число делителей для числа " << n << ": " << res << endl;
	if (res <= 2)
		res = 1;
	else res = 0;
	cout << "Если число является простым, программа выведет 1. В противном случае - 0." << endl;
	cout << "Ответ: " << res << endl;
	_getch();

}