#include <stdio.h>

typedef unsigned long BitSet;               //���� ����

#define BitSetNull (BitSet)0				//������
#define BitSetBits 32						//��ȿ ��Ʈ ��
#define SetOf(no)  ((BitSet)1 << (no))		//���� {no}

//���� ���� Ȯ��
int IsMember(BitSet s, int data);
//���� ���� �߰�
void Add(BitSet* s, int data);
//���� ���� ����
void Remove(BitSet* s, int data);
//���� ���� ��ȯ
int Size(BitSet s);
//���տ��� ���
void Print(BitSet s);

int IsMember(BitSet s, int data) {
	return s & SetOf(data);
}
void Print(BitSet s) {
	printf("{ ");
	for (int i = 0; i < BitSetBits; ++i) {
		if (IsMember(s, i))
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
	for (; s != BitSetNull;++count)
		s &= s - 1;
	return count;
}

int main() {
	BitSet A = BitSetNull;

	Add(&A, 1);
	Add(&A, 3);
	Add(&A, 5);
	printf("size : %d\n", Size(A));

	Remove(&A, 3);
	printf("size : %d\n", Size(A));

	Print(A);
}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //������ �ִ�ũ��
//	int size;     //������ ����
//	int* buf;     //���� �迭�� �ּ�
//}Set;
//
////���� �ʱ�ȭ
//int Initialize(Set* s, int cap);
////���� ���� Ȯ��
//int IsMember(const Set* s, int data);
////���� �߰�
//void Add(Set* s, int data);
////���� ����
//void Remove(Set* s, int data);
////������ ���� ���� �ִ� ������ ����
//int Capacity(const Set* s);
////������ ����
//int Size(const Set* s);
////���� s2�� s1���� ����
//void Assign(Set* s1, const Set* s2);
////���� s1, s2�� ������ Ȯ��
//int Equal(const Set* s1, const Set* s2);
////���� s2, s3�� �������� s1�� ����
//Set* Union(Set* s1, const Set* s2, const Set* s3);
////���� s2, s3�� �������� s1�� ����
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
////���� s2-s3�� �������� s1�� ����
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
////���� s�� ��� ���Ҹ� ���
//void Print(const Set* s);
////������ �޸𸮿��� ����
//void Terminate(Set* s);
//
//int Initialize(Set* s, int cap) {
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0;//���� : 0, ���� : -1;
//}
//void Terminate(Set* s) {
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data) {
//
//	/////////////////////data �ߺ�?
//	if (IsMember(s, data) != -1)
//		return;
//
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//
//void Print(const Set* s) {
//	printf("size : %d, ", s->size);
//	printf("   {");
//	for (int i = 0; i < s->size; ++i) {
//		printf("%d, ", s->buf[i]);
//	}
//	printf("}\n");
//}
//int IsMember(const Set* s, int data) {
//
//	for (int i = 0; i < s->size; ++i) {
//		if (data == s->buf[i])
//			return i;// �����Ѵٸ� �����ϴ� �ε��� ��ȣ ��ȯ
//	}
//
//	return -1;//data���Ұ� �������� ������
//}
//
//void Remove(Set* s, int data) {
//	int index;
//	if ((index = IsMember(s, data)) != -1)
//		s->buf[index] = s->buf[--s->size];
//}
//int Capacity(const Set* s) {
//	return s->capacity;
//}
//int Size(const Set* s) {
//	return s->size;
//}
//void Assign(Set* s1, const Set* s2) {
//
//	//s1�� �ִ�ũ�Ⱑ s2�� ������� ������ ū�� üũ
//	int max = s1->capacity < s2->size ? s1->capacity : s2->size;
//	for (int i = 0; i < max; ++i) {
//		s1->buf[i] = s2->buf[i];
//	}
//	s1->size = max;
//}
//int Equal(const Set* s1, const Set* s2) {
//	//���ĵǾ� ���� ���� �����̱� ������ ��� ���ؾ���
//	for (int i = 0; i < s1->size; ++i) {
//		int j;
//		for (j = 0; j < s2->size; ++j) {
//			if (s1->buf[i] == s2->buf[j])
//				break;
//		}
//		if (j == s2->size)//���� ���� ���Ұ� �����ߴٴ� �ǹ�
//			return 0;
//	}
//	return 1;//�� ������ ���Ұ� �����ϴٴ� �ǹ�
//}
//
//Set* Union(Set* s1, const Set* s2, const Set* s3) {
//
//	Assign(s1, s2);
//	for (int i = 0; i < s3->size; ++i) {
//		Add(s1, s3->buf[i]);
//	}
//
//	return s1;
//}
//Set* Intersection(Set* s1, const Set* s2, const Set* s3) {
//
//	s1->size = 0;
//	for (int i = 0; i < s2->size; ++i) {
//		for (int j = 0; j < s3->size; ++j)
//			if (s2->buf[i] == s3->buf[j])
//				Add(s1, s2->buf[i]);
//	}
//	return s1;
//}
//
//Set* Difference(Set* s1, const Set* s2, const Set* s3) {
//	s1->size = 0;
//	for (int i = 0; i < s2->size; ++i) {
//		{
//			int j;
//			for (j = 0; j < s3->size; ++j) {
//				if (s2->buf[i] == s3->buf[j])
//					break;
//			}
//			if (j == s3->size)
//				Add(s1, s2->buf[i]);
//		}
//	}
//	return s1;
//}
//
//int main() {
//
//	Set A;
//	Set B;
//	Set C;
//	Initialize(&A, 100);
//	Initialize(&B, 100);
//	Initialize(&C, 100);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//
//	Add(&B, 1);
//	Add(&B, 4);
//	Add(&B, 6);
//
//	Difference(&C, &A, &B);
//	Print(&A);
//	Print(&B);
//	Print(&C);
//
//	Terminate(&A);
//	Terminate(&B);
//	Terminate(&C);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //������ �ִ�ũ��
//	int size;     //������ ����
//	int* buf;     //���� �迭�� �ּ�
//}Set;
//
////���� �ʱ�ȭ
//int Initialize(Set* s, int cap);
////���� ���� Ȯ��
//int IsMember(const Set* s, int data);
////���� �߰�
//void Add(Set* s, int data);
////���� ����
//void Remove(Set* s, int data);
////������ ���� ���� �ִ� ������ ����
//int Capacity(const Set* s);
////������ ����
//int Size(const Set* s);
////���� s2�� s1���� ����
//void Assign(Set* s1, const Set* s2);
////���� s1, s2�� ������ Ȯ��
//int Equal(const Set* s1, const Set* s2);
////���� s2, s3�� �������� s1�� ����
//Set* Union(Set* s1, const Set* s2, const Set* s3);
////���� s2, s3�� �������� s1�� ����
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
////���� s2-s3�� �������� s1�� ����
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
////���� s�� ��� ���Ҹ� ���
//void Print(const Set* s);
////������ �޸𸮿��� ����
//void Terminate(Set* s);
//
//int Initialize(Set* s, int cap) {
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0;//���� : 0, ���� : -1;
//}
//void Terminate(Set* s) {
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data) {
//
//	/////////////////////data �ߺ�?
//	if (IsMember(s, data) != -1)
//		return;
//
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//
//void Print(const Set* s) {
//	printf("size : %d, ", s->size);
//	printf("   {");
//	for (int i = 0; i < s->size; ++i) {
//		printf("%d, ", s->buf[i]);
//	}
//	printf("}\n");
//}
//int IsMember(const Set* s, int data) {
//
//	for (int i = 0; i < s->size; ++i) {
//		if (data == s->buf[i])
//			return i;// �����Ѵٸ� �����ϴ� �ε��� ��ȣ ��ȯ
//	}
//
//	return -1;//data���Ұ� �������� ������
//}
//
//void Remove(Set* s, int data) {
//	int index;
//	if ((index = IsMember(s, data)) != -1)
//		s->buf[index] = s->buf[--s->size];
//}
//int Capacity(const Set* s) {
//	return s->capacity;
//}
//int Size(const Set* s) {
//	return s->size;
//}
//void Assign(Set* s1, const Set* s2) {
//
//	//s1�� �ִ�ũ�Ⱑ s2�� ������� ������ ū�� üũ
//	int max = s1->capacity < s2->size ? s1->capacity : s2->size;
//	for (int i = 0; i < max; ++i) {
//		s1->buf[i] = s2->buf[i];
//	}
//	s1->size = max;
//}
//int Equal(const Set* s1, const Set* s2) {
//	//���ĵǾ� ���� ���� �����̱� ������ ��� ���ؾ���
//	for (int i = 0; i < s1->size; ++i) {
//		int j;
//		for (j = 0; j < s2->size; ++j) {
//			if (s1->buf[i] == s2->buf[j])
//				break;
//		}
//		if (j == s2->size)//���� ���� ���Ұ� �����ߴٴ� �ǹ�
//			return 0;
//	}
//	return 1;//�� ������ ���Ұ� �����ϴٴ� �ǹ�
//}
//
//Set* Union(Set* s1, const Set* s2, const Set* s3) {
//
//	Assign(s1, s2);
//	for (int i = 0; i < s3->size; ++i) {
//		Add(s1, s3->buf[i]);
//	}
//
//	return s1;
//}
//Set* Intersection(Set* s1, const Set* s2, const Set* s3) {
//
//	s1->size = 0;
//	for (int i = 0; i < s2->size; ++i) {
//		for (int j = 0; j < s3->size; ++j)
//			if (s2->buf[i] == s3->buf[j])
//				Add(s1, s2->buf[i]);
//	}
//	return s1;
//}
//
//Set* Difference(Set* s1, const Set* s2, const Set* s3) {
//	s1->size = 0;
//	for (int i = 0; i < s2->size; ++i) {
//		{
//			int j;
//			for (j = 0; j < s3->size; ++j) {
//				if (s2->buf[i] == s3->buf[j])
//					break;
//			}
//			if (j == s3->size)
//				Add(s1, s2->buf[i]);
//		}
//	}
//	return s1;
//}
//
//int main() {
//
//	Set A;
//	Set B;
//	Set C;
//	Initialize(&A, 100);
//	Initialize(&B, 100);
//	Initialize(&C, 100);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//
//	Add(&B, 1);
//	Add(&B, 4);
//	Add(&B, 6);
//
//	Difference(&C, &A, &B);
//	Print(&A);
//	Print(&B);
//	Print(&C);
//
//	Terminate(&A);
//	Terminate(&B);
//	Terminate(&C);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //������ �ִ�ũ��
//	int size;     //������ ����
//	int* buf;     //���� �迭�� �ּ�
//}Set;
//
////���� �ʱ�ȭ
//int Initialize(Set* s, int cap);
////���� ���� Ȯ��
//int IsMember(const Set* s, int data);
////���� �߰�
//void Add(Set* s, int data);
////���� ����
//void Remove(Set* s, int data);
////������ ���� ���� �ִ� ������ ����
//int Capacity(const Set* s);
////������ ����
//int Size(const Set* s);
////���� s2�� s1���� ����
//void Assign(Set* s1, const Set* s2);
////���� s1, s2�� ������ Ȯ��
//int Equal(const Set* s1, const Set* s2);
////���� s2, s3�� �������� s1�� ����
//Set* Union(Set* s1, const Set* s2, const Set* s3);
////���� s2, s3�� �������� s1�� ����
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
////���� s2-s3�� �������� s1�� ����
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
////���� s�� ��� ���Ҹ� ���
//void Print(const Set* s);
////������ �޸𸮿��� ����
//void Terminate(Set* s);
//
//int Initialize(Set* s, int cap) {
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0;//���� : 0, ���� : -1;
//}
//void Terminate(Set* s) {
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data) {
//
//	/////////////////////data �ߺ�?
//	if (IsMember(s, data) != -1)
//		return;
//
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//
//void Print(const Set* s) {
//	printf("size : %d, ", s->size);
//	printf("   {");
//	for (int i = 0; i < s->size; ++i) {
//		printf("%d, ", s->buf[i]);
//	}
//	printf("}\n");
//}
//int IsMember(const Set* s, int data) {
//
//	for (int i = 0; i < s->size; ++i) {
//		if (data == s->buf[i])
//			return i;// �����Ѵٸ� �����ϴ� �ε��� ��ȣ ��ȯ
//	}
//
//	return -1;//data���Ұ� �������� ������
//}
//
//void Remove(Set* s, int data) {
//	int index;
//	if ((index = IsMember(s, data)) != -1)
//		s->buf[index] = s->buf[--s->size];
//}
//int Capacity(const Set* s) {
//	return s->capacity;
//}
//int Size(const Set* s) {
//	return s->size;
//}
//void Assign(Set* s1, const Set* s2) {
//
//	//s1�� �ִ�ũ�Ⱑ s2�� ������� ������ ū�� üũ
//	int max = s1->capacity < s2->size ? s1->capacity : s2->size;
//	for (int i = 0; i < max; ++i) {
//		s1->buf[i] = s2->buf[i];
//	}
//	s1->size = max;
//}
//int Equal(const Set* s1, const Set* s2) {
//	//���ĵǾ� ���� ���� �����̱� ������ ��� ���ؾ���
//	for (int i = 0; i < s1->size; ++i) {
//		int j;
//		for (int j = 0; j < s2->size; ++j) {
//			if (s1->buf[i] == s2->buf[j])
//				break;
//		}
//		if (j == s2->size)//���� ���� ���Ұ� �����ߴٴ� �ǹ�
//			return 0;
//	}
//	return 1;//�� ������ ���Ұ� �����ϴٴ� �ǹ�
//}
//
//
//int main() {
//
//	Set A;
//	Set B;
//	Initialize(&A, 100);
//	Initialize(&B, 100);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//	Add(&B, 1);
//	Add(&B, 4);
//	Add(&B, 6);
//	Print(&A);
//	Print(&B);
//
//	Assign(&A, &B);
//	Print(&A);
//	Print(&B);
//
//	Terminate(&A);
//	Terminate(&B);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //������ �ִ�ũ��
//	int size;     //������ ����
//	int* buf;     //���� �迭�� �ּ�
//}Set;
//
////���� �ʱ�ȭ
//int Initialize(Set* s, int cap);
////���� ���� Ȯ��
//int IsMember(const Set* s, int data);
////���� �߰�
//void Add(Set* s, int data);
////���� ����
//void Remove(Set* s, int data);
////������ ���� ���� �ִ� ������ ����
//int Capacity(const Set* s);
////������ ����
//int Size(const Set* s);
////���� s2�� s1���� ����
//void Assign(Set* s1, const Set* s2);
////���� s1, s2�� ������ Ȯ��
//int Equal(const Set* s1, const Set* s2);
////���� s2, s3�� �������� s1�� ����
//Set* Union(Set* s1, const Set* s2, const Set* s3);
////���� s2, s3�� �������� s1�� ����
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
////���� s2-s3�� �������� s1�� ����
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
////���� s�� ��� ���Ҹ� ���
//void Print(const Set* s);
////������ �޸𸮿��� ����
//void Terminate(Set* s);
//
//int Initialize(Set* s, int cap) {
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0;//���� : 0, ���� : -1;
//}
//void Terminate(Set* s) {
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data) {
//
//	/////////////////////data �ߺ�?
//	if (IsMember(s, data) != -1)
//		return;
//
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//
//void Print(const Set* s) {
//	printf("size : %d, ", s->size);
//	printf("   {");
//	for (int i = 0; i < s->size; ++i) {
//		printf("%d, ", s->buf[i]);
//	}
//	printf("}\n");
//}
//int IsMember(const Set* s, int data) {
//
//	for (int i = 0; i < s->size; ++i) {
//		if (data == s->buf[i])
//			return i;// �����Ѵٸ� �����ϴ� �ε��� ��ȣ ��ȯ
//	}
//
//	return -1;//data���Ұ� �������� ������
//}
//
//void Remove(Set* s, int data) {
//	int index;
//	if ((index = IsMember(s, data)) != -1)
//		s->buf[index] = s->buf[--s->size];
//}
//int Capacity(const Set* s) {
//	return s->capacity;
//}
//int Size(const Set* s) {
//	return s->size;
//}
//void Assign(Set* s1, const Set* s2) {
//
//	//s1�� �ִ�ũ�Ⱑ s2�� ������� ������ ū�� üũ
//	int max = s1->capacity < s2->size ? s1->capacity : s2->size;
//	for (int i = 0; i < max  ; ++i) {
//		s1->buf[i] = s2->buf[i];
//	}
//	s1->size = s2->size;
//}
//
//
//int main() {
//
//	Set A;
//	Initialize(&A, 100);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//	Remove(&A, 1);
//	//Add(&A, 3);
//	Print(&A);
//	Terminate(&A);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //������ �ִ�ũ��
//	int size;     //������ ����
//	int* buf;     //���� �迭�� �ּ�
//}Set;
//
////���� �ʱ�ȭ
//int Initialize(Set* s, int cap);
////���� ���� Ȯ��
//int IsMember(const Set* s, int data);
////���� �߰�
//void Add(Set* s, int data);
////���� ����
//void Remove(Set* s, int data);
////������ ���� ���� �ִ� ������ ����
//int Capacity(const Set* s);
////������ ����
//int Size(const Set* s);
////���� s2�� s1���� ����
//void Assign(Set* s1, const Set* s2);
////���� s1, s2�� ������ Ȯ��
//int Equal(const Set* s1, const Set* s2);
////���� s2, s3�� �������� s1�� ����
//Set* Union(Set* s1, const Set* s2, const Set* s3);
////���� s2, s3�� �������� s1�� ����
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
////���� s2-s3�� �������� s1�� ����
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
////���� s�� ��� ���Ҹ� ���
//void Print(const Set* s);
////������ �޸𸮿��� ����
//void Terminate(Set* s);
//
//int Initialize(Set* s, int cap) {
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0;//���� : 0, ���� : -1;
//}
//void Terminate(Set* s) {
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data) {
//
//	/////////////////////data �ߺ�?
//	if (IsMember(s, data) != -1)
//		return;
//
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//
//
//void Print(const Set* s) {
//	printf("size : %d, ", s->size);
//	printf("   {");
//	for (int i = 0; i < s->size; ++i) {
//		printf("%d, ", s->buf[i]);
//	}
//	printf("}\n");
//}
//int IsMember(const Set* s, int data) {
//
//	for (int i = 0; i < s->size; ++i) {
//		if (data == s->buf[i])
//			return i;// �����Ѵٸ� �����ϴ� �ε��� ��ȣ ��ȯ
//	}
//
//	return -1;//data���Ұ� �������� ������
//}
//
//void Remove(Set* s, int data) {
//	int index;
//	if((index = IsMember(s, data)) !=-1)
//	s->buf[index] = s->buf[--s->size];
//}
//
//
//int main() {
//	Set A;
//	Initialize(&A, 100);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//	Remove(&A, 1);
//	//Add(&A, 3);
//	Print(&A);
//	Terminate(&A);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //������ �ִ�ũ��
//	int size;     //������ ����
//	int* buf;     //���� �迭�� �ּ�
//}Set;
//
////���� �ʱ�ȭ
//int Initialize(Set* s, int cap);
////���� ���� Ȯ��
//int IsMember(const Set* s, int data);
////���� �߰�
//void Add(Set* s, int data);
////���� ����
//void Remove(Set* s, int data);
////������ ���� ���� �ִ� ������ ����
//int Capacity(const Set* s);
////������ ����
//int Size(const Set* s);
////���� s2�� s1���� ����
//void Assign(Set* s1, const Set* s2);
////���� s1, s2�� ������ Ȯ��
//int Equal(const Set* s1, const Set* s2);
////���� s2, s3�� �������� s1�� ����
//Set* Union(Set* s1, const Set* s2, const Set* s3);
////���� s2, s3�� �������� s1�� ����
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
////���� s2-s3�� �������� s1�� ����
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
////���� s�� ��� ���Ҹ� ���
//void Print(const Set* s);
////������ �޸𸮿��� ����
//void Terminate(Set* s);
//
//int Initialize(Set* s, int cap) {
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0;//���� : 0, ���� : -1;
//}
//void Terminate(Set* s) {
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data) {
//
//	/////////////////////data �ߺ�?
//	if (IsMember(s, data) != -1)
//		return;
//
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//
//
//void Print(const Set* s) {
//	printf("size : %d, ", s->size);
//	printf("   {");
//	for (int i = 0; i < s->size; ++i) {
//		printf("%d, ", s->buf[i]);
//	}
//	printf("}\n");
//}
//int IsMember(const Set* s, int data) {
//
//	for (int i = 0; i < s->size; ++i) {
//		if (data == s->buf[i])
//			return i;// �����Ѵٸ� �����ϴ� �ε��� ��ȣ ��ȯ
//	}
//
//	return -1;//data���Ұ� �������� ������
//}
//
//
//int main() {
//	Set A;
//	Initialize(&A, 100);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//	//Add(&A, 3);
//	Print(&A);
//	Terminate(&A);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //������ �ִ�ũ��
//	int size;     //������ ����
//	int* buf;     //���� �迭�� �ּ�
//}Set;
//
////���� �ʱ�ȭ
//int Initialize(Set* s, int cap);
////���� ���� Ȯ��
//int IsMember(const Set* s, int data);
////���� �߰�
//void Add(Set* s, int data);
////���� ����
//void Remove(Set* s, int data);
////������ ���� ���� �ִ� ������ ����
//int Capacity(const Set* s);
////������ ����
//int Size(const Set* s);
////���� s2�� s1���� ����
//void Assign(Set* s1, const Set* s2);
////���� s1, s2�� ������ Ȯ��
//int Equal(const Set* s1, const Set* s2);
////���� s2, s3�� �������� s1�� ����
//Set* Union(Set* s1, const Set* s2, const Set* s3);
////���� s2, s3�� �������� s1�� ����
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
////���� s2-s3�� �������� s1�� ����
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
////���� s�� ��� ���Ҹ� ���
//void Print(const Set* s);
////������ �޸𸮿��� ����
//void Terminate(Set* s);
//
//int Initialize(Set* s, int cap) {
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0;//���� : 0, ���� : -1;
//}
//void Terminate(Set* s) {
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//void Add(Set* s, int data) {
//
//	/////////////////////data �ߺ�?
//	if (s->size < s->capacity)
//		s->buf[s->size++] = data;
//}
//
//
//void Print(const Set* s) {
//	printf("size : %d, ",s->size);
//	printf("   {");
//	for (int i = 0; i < s->size; ++i) {
//		printf("%d, ", s->buf[i]);
//	}
//	printf("   }\n");
//}
//
//
//int main() {
//	Set A;
//	Initialize(&A, 100);
//	Add(&A, 1);
//	Add(&A, 3);
//	Add(&A, 5);
//	Print(&A);
//	Terminate(&A);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int capacity; //������ �ִ�ũ��
//	int size;     //������ ����
//	int* buf;     //���� �迭�� �ּ�
//}Set;
//
////���� �ʱ�ȭ
//int Initialize(Set* s, int cap);
////���� ���� Ȯ��
//int IsMember(const Set* s, int data);
////���� �߰�
//void Add(Set* s, int data);
////���� ����
//void Remove(Set* s, int data);
////������ ���� ���� �ִ� ������ ����
//int Capacity(const Set* s);
////������ ����
//int Size(const Set* s);
////���� s2�� s1���� ����
//void Assign(Set* s1, const Set* s2);
////���� s1, s2�� ������ Ȯ��
//int Equal(const Set* s1, const Set* s2);
////���� s2, s3�� �������� s1�� ����
//Set* Union(Set* s1, const Set* s2, const Set* s3);
////���� s2, s3�� �������� s1�� ����
//Set* Intersection(Set* s1, const Set* s2, const Set* s3);
////���� s2-s3�� �������� s1�� ����
//Set* Difference(Set* s1, const Set* s2, const Set* s3);
////���� s�� ��� ���Ҹ� ���
//void Print(const Set* s);
////������ �޸𸮿��� ����
//void Terminate(Set* s);
//
//int Initialize(Set* s, int cap) {
//	s->capacity = cap;
//	s->size = 0;
//	s->buf = (int*)malloc(sizeof(int) * cap);
//
//	return 0;//���� : 0, ���� : -1;
//}
//void Terminate(Set* s) {
//	free(s->buf);
//	s->capacity = s->size = 0;
//}
//
//
//int main() {
//	Set A;
//	Initialize(&A, 100);
//
//	Terminate(&A);
//
//	return 0;
//}