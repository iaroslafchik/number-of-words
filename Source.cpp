#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

char string[2000];

int main() {
	setlocale(LC_ALL, "ru_RU");

	printf("������� ����� ��� ������� \"����\"\n> ");
	scanf("%[^\n]s", string);

	int counter = 0;

	// ��� ����� - ��� � ���
	for (int i = 0; string[i] != '\0'; i++)
		if (string[i] != ' ')
			for (counter++; string[i] != '\0'; i++) // ����� ����������� ����� :)
				if (string[i] == ' ') break;

	printf("\"����\" � ������: %d", counter);
}