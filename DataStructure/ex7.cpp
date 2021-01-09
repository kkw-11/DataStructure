#include <stdio.h>

void PrintList(int list[], int size) {
	for (int i = 0; i < size; ++i) {
		printf("%5d", list[i]);
	}
	printf("\n");

}
void Swap(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
//��ü �������� �ּҰ����ϱ�

int Min(int list[], int size) {
	int min = 0;

	for (int i = 1; i < size; ++i) {
		if (list[i] < list[min])
			min = i;
	}

	return min;
}

int Min(int list[], int sIndex, int eIndex) {
	int min = sIndex;

	for (int i = sIndex + 1; i <= eIndex; ++i) {
		if (list[i] < list[min])
			min = i;
	}

	return min;
}
void SelectionSort(int list[], int size) {

	for (int i = 0; i < size - 1; ++i) {
		int min = Min(list, i, size - 1);
		Swap(&list[i], &list[min]);
	}
}


int main() {

	int list[10] = { 80,20,70,50,60,90,40,30 };

	int size = 8;
	PrintList(list, size);
	
	SelectionSort(list, size);

	PrintList(list, size);

	return 0;
}


//#include <stdio.h>
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//
//}
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
////��ü �������� �ּҰ����ϱ�
//
//int Min(int list[], int size) {
//	int min = 0;
//
//	for (int i = 1; i < size; ++i) {
//		if (list[i] < list[min])
//			min = i;
//	}
//
//	return min;
//}
//
//int Min(int list[], int sIndex, int eIndex) {
//	int min = sIndex;
//
//	for (int i = sIndex + 1; i <= eIndex; ++i) {
//		if (list[i] < list[min])
//			min = i;
//	}
//
//	return min;
//}
//
//
//int main() {
//
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//
//	int size = 8;
//	PrintList(list, size);
//
//	{
//		// �־��� �������� �ּ� �� ã�� �� ���� �ε��� ��ȯ
//		for (int i = 0; i < size - 1; ++i) {
//			int min = Min(list, i, size - 1);
//			Swap(&list[i], &list[min]);
//		}
//	}
//
//	PrintList(list, size);
//
//	return 0;
//}

//#include <stdio.h>
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//
//}
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
////��ü �������� �ּҰ����ϱ�
//
//int Min(int list[], int size) {
//	int min = 0;
//
//	for (int i = 1; i < size; ++i) {
//		if (list[i] < list[min])
//			min = i;
//	}
//
//	return min;
//}
//
//int Min(int list[], int sIndex, int eIndex) {
//	int min = sIndex;
//
//	for (int i = sIndex + 1; i <= eIndex; ++i) {
//		if (list[i] < list[min])
//			min = i;
//	}
//
//	return min;
//}
//
//
//int main() {
//
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//
//	int size = 8;
//	int min = 0;
//	PrintList(list, size);
//
//	{
//		// �־��� �������� �ּ� �� ã�� �� ���� �ε��� ��ȯ
//		min = Min(list, 0, size - 1);
//		Swap(&list[0], &list[min]);
//		min = Min(list, 1, size - 1);
//		Swap(&list[1], &list[min]);
//		min = Min(list, 2, size - 1);
//		Swap(&list[2], &list[min]);
//		min = Min(list, 3, size - 1);
//		Swap(&list[3], &list[min]);
//		min = Min(list, 4, size - 1);
//		Swap(&list[4], &list[min]);
//		min = Min(list, 5, size - 1);
//		Swap(&list[5], &list[min]);
//		min = Min(list, 6, size - 1);
//		Swap(&list[6], &list[min]);
//	}
//
//	PrintList(list, size);
//
//	return 0;
//}

//���� ���� �����ڵ�
//#include <stdio.h>
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//
//}
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int Min(int list[], int size) {
//	int min = 0;
//
//	for (int i = 1; i < size; ++i) {
//		if (list[i] < list[min])
//			min = i;
//	}
//
//	return min;
//}
////�ʱ� min ���� ������ ù��° ���� �ְ� �� ���� ���Һ��� ������ �ο��� �������� �ּҰ� ã��
//int Min(int list[], int first, int size) {
//	int min = first;
//
//	for (int i = first + 1; i < size; ++i) {
//		if (list[i] < list[min])
//			min = i;
//	}
//
//	return min;
//}
//
//
//int main() {
//
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//
//	int size = 8;
//	int min = 0;
//	PrintList(list, size);
//	min = Min(list, 8);
//	printf("min = %d\n", list[min]);
//
//
//	for (int i = 0; i < size - 1; ++i) {
//		min = Min(list, i, size);
//		Swap(&list[i], &list[min]);
//	}
//
//	PrintList(list, size);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//
//}
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int Min(int list[], int size) {
//	int min = 0;
//
//	for (int i = 1; i < size; ++i) {
//		if (list[i] < list[min])
//			min = i;
//	}
//
//	return min;
//}
//
//int Min(int list[], int first, int size) {
//	int min = first;
//
//	for (int i = first + 1; i < size; ++i) {
//		if (list[i] < list[min])
//			min = i;
//	}
//
//	return min;
//}
//
//
//int main() {
//
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//
//	int size = 8;
//	int min = 0;
//	PrintList(list, size);
//	
//	{
//		min = Min(list, size);// ��ü �������� �ּ� �� ã�� �� ���� �ε��� ��ȯ
//		Swap(&list[0], &list[min]);
//		printf("min = %d\n", list[min]);
//	}
//
//	PrintList(list, size);
//
//
//	return 0;
//}



//#include <stdio.h>
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//
//}
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//
//
//int main() {
//
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//
//	int size = 8;
//	PrintList(list, size);
//
//	int min = 0;
//
//	for (int i = 1; i < size; ++i) {
//		if (list[i] < list[min])
//			min = i;
//	}
//
//	printf("min:%d\n", min);
//
//	return 0;
//}

//#include <stdio.h>
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//
//}
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int main() {
//
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//
//	int size = 8;
//
//	PrintList(list, size);
//	Swap(&list[0], &list[1]);
//
//	PrintList(list, size);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//
//}
//void swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int main() {
//
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//
//	int size = 8;
//
//	PrintList(list, size);
//	//swap
//	swap(&list[0],&list[1]);
//
//	PrintList(list, size);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//
//}
//
//int main() {
//
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//
//	int size = 8;
//
//	PrintList(list, size);
//	//swap
//	{
//		int temp = list[0];
//		list[0] = list[1];
//		list[1] = temp;
//
//	}
//	PrintList(list, size);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//
//}
//
//
//int main() {
//
//	int list[10] = {80,20,70,50,60,90,40,30};
//
//	int size = 8;
//
//	PrintList(list, size);
//
//
//	return 0;
//}