#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include "Header.h"
using namespace std;

void createArrChar(char*mas, int n)
{
	srand(time(NULL));
	char letter, capitalLetter;

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			letter = 'a' + rand() % 25;
			mas[i] = letter;
		}
		else
		{
			capitalLetter = 'A' + rand() % 25;
			mas[i] = capitalLetter;
		}
		cout << mas[i];
	}
	cout << endl << endl;
}

void createArrCharWithStars(char*mas, int n)
{
	char *after = new char[n * 2];
	int count = 0;
	for (int i = 0; i < n * 2 - 1; i++)
	{
		if (i % 2 == 0)
		{
			after[i] = mas[count];
			count++;
		}
		else
			after[i] = '*';
		cout << after[i];
	}
	cout << endl << endl;
}