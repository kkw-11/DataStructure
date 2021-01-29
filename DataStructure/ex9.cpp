#include <stdio.h>
#include <algorithm>
using namespace std;

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

	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
	int size = 10;

	PrintList(list, size);
	size = 0;
	for (int i = 0; i < 10; ++i) {
		++size;
		push_heap(list, list + size);

	}

	//	make_heap(list, list + size);
	PrintList(list, size);
	//for (int i = 0; i < 10; ++i) {
	//	pop_heap(list, list + size);
	//	--size;
	//}
	sort_heap(list, list + size);
	PrintList(list, 10);


	return 0;



}//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
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
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//	
//	PrintList(list, size);
//	size = 0;
//	++size;
//	
//	push_heap(list, list + size);
//	++size;
//	push_heap(list, list + size);
//	++size;
//	
//	//	make_heap(list, list + size);
//	PrintList(list, size);
//	//for (int i = 0; i < 10; ++i) {
//	//	pop_heap(list, list + size);
//	//	--size;
//	//}
//	//PrintList(list, 10);
//
//
//	return 0;
//
//}


//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
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
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//	PrintList(list, size);
//
//	size = 0;
//	push_heap(list, list + 1);
//	++size;
//	push_heap(list, list + 2);
//	++size;
//	push_heap(list, list + 3);
//	++size;
//
//	//	make_heap(list, list + size);
//	PrintList(list, size);
//	//for (int i = 0; i < 10; ++i) {
//	//	pop_heap(list, list + size);
//	//	--size;
//	//}
//	//PrintList(list, 10);
//
//
//	return 0;
//
//}


//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
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
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//	PrintList(list, size);
//
//	make_heap(list, list + size);
//	PrintList(list, size);
//	for (int i = 0; i < 10; ++i) {
//		pop_heap(list, list + size);
//		--size;
//	}
//		
//	PrintList(list, 10);
//
//
//	return 0;
//
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
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
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//	PrintList(list, size);
//
//	make_heap(list, list + size);
//	PrintList(list, size);
//	pop_heap(list, list + size);
//	--size;	
//	pop_heap(list, list + size);
//	--size;
//	PrintList(list, 10 );
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
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
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//	PrintList(list, size);
//
//	make_heap(list, list + size);
//	PrintList(list, size);
//	sort_heap(list,list+size);
//	PrintList(list, size);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//void PrintList(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//
//}
//void _Sort(int list[], int left, int right) {
//	if (left <= right) {
//		int pivot = left;
//		int i = left + 1;
//		int j = right;
//		do {
//			while (list[pivot] > list[i]) {
//				++i;
//			}
//			while (list[pivot] < list[j]) {
//				--j;
//			}
//
//			if (i <= j) {
//				Swap(&list[i], &list[j]);
//				++i;
//				--j;
//			}
//
//		} while (i <= j);
//		Swap(&list[pivot], &list[j]);
//		_Sort(list, left, j - 1);
//		_Sort(list, j + 1, right);
//	}
//}
//void Sort(int list[], int size) {
//
//	_Sort(list, 0, size - 1); //재귀함수동작을 위한 위임함수
//
//}
//int main() {
//
//	int list[10] = { 50,20,70,80,60,90,40,30,45,75 };
//	int size = 10;
//	PrintList(list, size);
//
//	Sort(list, size);
//
//	PrintList(list, size);
//
//
//	return 0;
//}