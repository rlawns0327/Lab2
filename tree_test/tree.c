#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <search.h>

typedef struct {

	char* name;
	int mid_score;
	int end_score;


} Student;

int compare(const void *cp1, const void *cp2){
	return strcmp(((Student*)cp1)->name, ((Student*)cp2)->name);
}

void print_student(const void *student, VISIT order, int level) {
	if(order == preorder || order == leaf) {
		printf("\nName : %s\nmid_score : %d\nend_score : %d\n",(*(Student**)student)->name, (*(Student**)student)->mid_score, (*(Student**)student)->end_score);
	}
}


int main()
{
	Student *root = NULL;
	int num;
	printf("How Many People : ");
	scanf("%d", &num);
	
	char *name = (char *)malloc(sizeof(char) * 16);
	Student *student_table = (Student*)malloc(num * sizeof(Student));
	
	Student **ret;
	
	int i;
	for(i = -1; i + 1 < num ; i++){
		printf("input Name : ");
		scanf("%s",name);		
		student_table->name = name;
		printf("input mid score : ");
		scanf("%d",&student_table->mid_score);
		printf("input end score : ");
		scanf("%d",&student_table->end_score);

		
		ret = (Student**) tsearch((void *) student_table, (void **) &root, compare);
		
		if(*ret == student_table) {
			printf("regist student\n\n");
			name += strlen(name)+1 ;
			student_table++;
		} else {
			printf("already registed ");
			i--;
		}		
	}
	printf("\n=====================================\n");
	twalk((void *) root, print_student);
	
	return 0;
}
