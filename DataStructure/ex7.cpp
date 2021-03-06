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
//전체 구간에서 최소값구하기

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

void BubbleSort(int list[], int size) {
	
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < (size - 1) - i; ++j) {
			if (list[j] > list[j + 1])
				Swap(&list[j], &list[j + 1]);
		}
	}
}

int main() {

	int list[10] = { 80,20,70,50,60,90,40,30 };

	int size = 8;
	PrintList(list, size);

	BubbleSort(list, size);

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
////전체 구간에서 최소값구하기
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
//void BubbleSort(int list[], int size) {
//	for (int j = 0; j < (size - 1); ++j) {
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//
//	for (int j = 0; j < (size - 1) - 1; ++j) {
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//
//	for (int j = 0; j < (size - 1) - 2; ++j) {
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//
//	for (int j = 0; j < (size - 1) - 3; ++j) {
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//
//	for (int j = 0; j < (size - 1) - 4; ++j) {
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//
//	for (int j = 0; j < (size - 1) - 5; ++j) {
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//
//	for (int j = 0; j < (size - 1) - 6; ++j) {
//		if (list[j] > list[j + 1])
//			Swap(&list[j], &list[j + 1]);
//	}
//
//}
//
//int main() {
//
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//
//	int size = 8;
//	PrintList(list, size);
//
//	BubbleSort(list, size);
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
////전체 구간에서 최소값구하기
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
//void BubbleSort(int list[], int size) {
//
//	for (int i = 0; i < size - 1; ++i) {
//		if (list[i] > list[i + 1])
//			Swap(&list[i], &list[i + 1]);
//	}
//}
//
//int main() {
//
//	int list[10] = { 80,20,70,50,60,90,40,30 };
//
//	int size = 8;
//	PrintList(list, size);
//
//	BubbleSort(list, size);
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
////전체 구간에서 최소값구하기
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
//void InsertionSort(int list[], int size) {
//
//	int value, j;
//	for (int i = 1; i < size; ++i) {
//		value = list[i];
//
//		for (j = i - 1; j >= 0; --j) {
//			if (list[j] > value)
//				list[j + 1] = list[j];
//			else
//				break;
//		}
//
//		list[j + 1] = value;
//	}
//}
//
//int main() {
//
//	//int list[10] = { 80,20,70,50,60,90,40,30 };
//	int list[10] = { 20,50,70, 80,10,90,40,30 };
//
//	int size = 8;
//	PrintList(list, size);
//
//	InsertionSort(list, size);
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
////전체 구간에서 최소값구하기
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
//void InsertionSort(int list[], int size) {
//
//	int value, j;
//	for (int i = 1; i < size; ++i) {
//		value = list[i];
//		
//		for (j = i - 1; j >= 0; --j) {
//			if (list[j] > value)
//				list[j + 1] = list[j];
//			else
//				break;
//		}
//		
//		list[j + 1] = value;
//	}
//}
//
//int main() {
//
//	//int list[10] = { 80,20,70,50,60,90,40,30 };
//	int list[10] = { 20,50,70, 80,10,90,40,30 };
//
//	int size = 8;
//	PrintList(list, size);
//
//	InsertionSort(list, size);
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
////전체 구간에서 최소값구하기
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
//void InsertionSort(int list[], int size) {
//
//	int cur = 4;
//	int value = list[cur];
//	int j;
//	for (j = cur - 1; j >= 0; --j) {
//		if (list[j] > value)
//			list[j + 1] = list[j];
//		else
//			break;
//	}
//	list[j + 1] = value;
//}
//
//int main() {
//
//	//int list[10] = { 80,20,70,50,60,90,40,30 };
//	int list[10] = { 20,50,70, 80,10,90,40,30 };
//
//	int size = 8;
//	PrintList(list, size);
//
//	InsertionSort(list, size);
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
////전체 구간에서 최소값구하기
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
//void InsertionSort(int list[], int size) {
//
//	int cur = 3;
//	int value = list[cur];
//	int j;
//	for (j = cur - 1; 1; --j) {
//		if (list[j] > value)
//			list[j + 1] = list[j];
//		else
//			break;
//	}
//	list[j + 1] = value;
//}
//
//int main() {
//
//	//int list[10] = { 80,20,70,50,60,90,40,30 };
//	int list[10] = { 20,70, 80,50,60,90,40,30 };
//
//	int size = 8;
//	PrintList(list, size);
//
//	InsertionSort(list, size);
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
////전체 구간에서 최소값구하기
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
//void SelectionSort(int list[], int size) {
//
//	for (int i = 0; i < size - 1; ++i) {
//		int min = Min(list, i, size - 1);
//		Swap(&list[i], &list[min]);
//	}
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
//	SelectionSort(list, size);
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
////전체 구간에서 최소값구하기
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
//		// 주어진 구간에서 최소 값 찾고 그 값의 인덱스 반환
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
////전체 구간에서 최소값구하기
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
//		// 주어진 구간에서 최소 값 찾고 그 값의 인덱스 반환
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

//나의 사전 예습코드
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
////초기 min 값에 구간의 첫번째 값을 주고 그 다음 원소부터 마지막 인엑스 까지에서 최소값 찾기
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
//		min = Min(list, size);// 전체 구간에서 최소 값 찾고 그 값의 인덱스 반환
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