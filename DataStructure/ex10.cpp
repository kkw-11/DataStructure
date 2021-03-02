#include <stdio.h>

typedef unsigned long BitSet;

#define BitSetNu (BitSet)0
#define BitSetBits 32
#define SetOf(no) ((BitSet)1<<(no))

int IsMember(BitSet s, int data) {

	return s & SetOf(data);

}

void Print(BitSet s) {

	printf("{ ");
	for (int i = 0; i < BitSetBits; ++i) {

		if (isMember(s, i))
			printf("%d ", i);
	}
	printf("} ");
}

void Add(BitSet* s, int data) {

	*s |= SetOf(data);
}

void Remove(BitSet* s, int data) {
	*s &= ~SetOf(data);
}

int Size(BitSet s) {
	int count = 0;
	for (; s != BitSetNull; ++count)
		S &= s - 1;
	return count;
}



int main() {

	BitSet A;

	printf("$d\n");

	return 0;
}

//#include <stdio.h>
//
//
//int Initialize(Set* s, int cap){
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = malloc(sizeof(int) * cap);
//
//	return 0;// 성공 : 0 실패:-1
//}
//void Terminate(Set* s) {
//
//	free(s->buff);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data){
//	
//	if (IsMember(s, data) != -1) {
//
//
//	}
//
//	if(s->size < s->capacity){
//		s->buf[s->size++] = data;
//	}
//}
//
//void Print(const Set* s) {
//
//	printf("size : %d", s->size);
//	printf(",     {");
//	for (int i = 0; i < s->size; ++i) {
//		printf()
//
//	}
//	printf("}\n");
//
//}
//
//int IsMember(const Set* s, int data) {
//
//	for (int i = 0; i < s->size; ++i)
//		if (data == s->buf[i])
//			return i;
//	return -1;//멤버X
//}
//void Remove(Set* s, int data) {
//
//
//	s->buf[IsMember(s, data)] = s->buf[s->size-1];
//
//	s->size;
//}
//
//
//int Capacity(const Set* s) {
//
//	return s->capacity;
//}
//
//int Size(const Set* s) {
//	return s->size;
//}
//
//void Assign(Set* s1, const Set* s2) {
//
//	int max = s1->capacity > < se->size ? s1->capacity : s2->size;
//	for (int i = 0; i < max; ++i)
//		s1->buf[i] = se->buf[i];
//	s1->size = max; 
//}
//
//
//int Equal(const Set* s1, const Set* s2) {
//
//	for (int i = 0; i < s1->size; ++i) {
//
//		for (int j = 0; j < s2->size; ++j)
//			if (s1->buf[i] == s2->buf[j])
//				break;
//		if (j == s2->size)
//			return 0;
//	}
//	return 1;
//}
//
//Set* Union(Set* s1, const Set* s2, const Set* s3) {
//
//	Assign(s1, s2);
//	for (int i = 0; i < s3->size; ++i) {
//
//		Add(s1, s3->[buf[i]]);
//	}
//
//	return s1;
//}
//
//Set* Intersection(Set* s1, const Set* s2, const Set* s3) {
//
//	s1->size = 0;
//	for (int i = 0; i < s2->size; ++i) {
//		for (intj = 0; j < s3->size; ++j)
//			if (s1->buf[i] == s2[j]->buf[j])
//				Add(s1, s2->buf[j]);
//	}
//	return s1;
//}
//Set* Difference(Set* s1, const Set* s2, const Set* s3) {
//	for (int i = 0; i < s2->size; ++i) {
//		int j;
//		for ( j = ; j < s3->size; ++j) {
//			if (s2->buf[i] == s3->buf[j])
//				break;
//		}
//		if (j == s3->size)
//			Add(s1, s2->buf[i]);
//	}
//	return s1;
//}
//
//
//int main() {
//
//	Set A;//집합변수 A만들기
//	Set B;
//	Set C;
//
//	Initialize(&A, 10); //메모리 초기화
//
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//	Print(&A);
//	Terminate(&A);//메모리 마무리
//}