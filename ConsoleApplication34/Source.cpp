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

	cout << "���� ������, ���������� ������ ���������� ����� (������� � ���������)." << endl
		<< "�������� ������ �*� (���������) ����� ������� (����� ������ ������ � " << endl
		<< "����� ��������� ������ �*� ��������� �� �����)." << endl
		<< "- ������� ������" << endl
		<< "�������� ������ ��������� �����. �������� �����, ��� ����� ������ �� " << endl
		<< "��������� 1000 ������." << endl
		<< "- �������� ������" << endl
		<< "������� ������, ������� ��������� ����� ���������� �������� '*'.\n\n";

	int r = 20 + rand() % 20;
	char *before = new char[r];
	cout << "����� ������ ����� ������������ ��������:\n";
	createArrChar(before, r);
	createArrCharWithStars(before, r);
}

