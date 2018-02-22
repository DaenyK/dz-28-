#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include "Header.h"

using namespace std;


void main()

{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	cout << "Дана строка, содержащая только английские буквы (большие и маленькие)." << endl
		<< "Добавить символ ‘*’ (звездочка) между буквами (перед первой буквой и " << endl
		<< "после последней символ ‘*’ добавлять не нужно)." << endl
		<< "- Входные данные" << endl
		<< "Вводится строка ненулевой длины. Известно также, что длина строки не " << endl
		<< "превышает 1000 знаков." << endl
		<< "- Выходные данные" << endl
		<< "Вывести строку, которая получится после добавления символов '*'.\n\n";

	int r = 20 + rand() % 20;
	char *before = new char[r];
	cout << "длина строки будет сформирована рандомно:\n";
	createArrChar(before, r);
	createArrCharWithStars(before, r);
}

