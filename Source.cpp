#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

char string[2000];

int main() {
	setlocale(LC_ALL, "ru_RU");

	printf("¬ведите текст дл€ посчета \"слов\"\n> ");
	scanf("%[^\n]s", string);

	int counter = 0;

	// ƒва цикла - »нь и янь
	for (int i = 0; string[i] != '\0'; i++)
		if (string[i] != ' ')
			for (counter++; string[i] != '\0'; i++) // ћожно переполнить буфер :)
				if (string[i] == ' ') break;

	printf("\"—лов\" в тексте: %d", counter);
}