#include <stdio.h>
typedef struct Grade {
	
	const char* pname;
	int eng;
	int kor;
	int mat;



}Gra;

int main() {


	Gra g1 = {"Tom",90,80,100};

	printf("%s : %d %d %d",g1.pname,g1.eng,g1.kor,g1.mat);
	Gra g2 = { "Tim",80,90,60 };





	return 0;
}