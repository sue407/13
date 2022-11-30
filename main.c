#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student {
		
		long ID;
		char NAME[10];
		float GRADE;
};
		
int main(int argc, char *argv[]) {
	
	struct student s1={2210192, "Junwon", 1.2};
	printf("ID: %d\n", s1.ID);
	printf("NAME: %s\n", s1.NAME);
	printf("GRADE: %f", s1.GRADE);


	return 0;
};
