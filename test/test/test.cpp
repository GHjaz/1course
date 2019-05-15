/*Даны положительные целые числа А и В, А>В. На отрезке длины А размещено максимально возможное количество отрезков длины В, без наложений.
Используя операцию деления нацело, найти количество отрезков В, размещенных на отрезке А.*/

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

void main()
{
	setlocale(0, "rus");
	int A, B, n;
	cout << "";
	cout << "Введите число А: " << endl;
	cin >> A;
	cout << "Введите число В, такое, что оно меньше А: " << endl;
	cin >> B;

	_asm
	{
		xor eax, A	//перемещаем в регистр eax число А
		xor A, eax	//эквивалентно mov eax,A	
		xor eax, A	//

		xor edx, edx	//обнуляет edx, в него сохраняется остаток

		xor ebx, B
		xor B, ebx
		xor ebx, B

		div ebx//деление eax на ebx, результат сохраняется в eax

		xor n, eax
		xor eax, n// перемещаем в n результат деления 
		xor n, eax

	}
	cout << "Число отрезков длины В, расположенных без наложений на отрезке длины А: " << n << endl;
	_getch();

}