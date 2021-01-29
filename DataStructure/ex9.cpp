#include <stdio.h>

void Swap(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void PrintList(int list[], int size) {
	for (int i = 0; i < size; ++i) {
		printf("%5d", list[i]);
	}
	printf("\n");

}

int main() {

	int list[10] = { 50,20,70,80,90,40,30,45,75 };
	int size = 10;

	PrintList(list, size);


	return 0;
}