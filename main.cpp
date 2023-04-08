#include <stdio.h>
#include <string.h>

void sortArray(char arr[5][20], int size);

int main() {
	char names[5][20];
	int i;
	printf("Введите 5 фамилий:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%s", names[i]);
	}

	printf("Before sorting: \n");
	for (i = 0; i < 5; i++) {
		printf("%s\n", names[i]);
	}

	sortArray(names, 5);

	printf("\nAfter sorting: \n");
	for (i = 0; i < 5; i++) {
		printf("%s\n", names[i]);
	}

	return 0;
}

void sortArray(char arr[5][20], int size) {
	char temp[20];

	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (strcmp(arr[i], arr[j]) > 0) {
				strcpy(temp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], temp);
			}
		}
	}
}