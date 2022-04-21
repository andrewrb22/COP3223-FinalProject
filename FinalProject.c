#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-----------Courses Structure------------------//
typedef struct course{

    int CRN;
    char course[10];
    int credit_hr;
} course;

//--------------Student Structure-----------------//
typedef struct student{
int id; 
char name[100];
int course_cnt;


}student;

//------------------Courses function----------------//
void initialize(struct course List[]){

List[0].CRN=4587;
strcpy(List[0].course, "MAT 263");
List[0].credit_hr=4;
List[1].CRN=4599;
strcpy(List[1].course, "COP 220");
List[1].credit_hr=3;
List[2].CRN=8997;
strcpy(List[2].course, "GOL 124");
List[2].credit_hr=1;




}


//-----------Main function-----------------------------------//

int main(){

    printf("\nWelcome!\nChoose from the following options:\n");
    printf("\t1- Add a new student\n");
    printf("\t2- Add/Delete a course\n");
    printf("\t3- Search for student\n");
    printf("\t4- Print fee invoice\n");
    printf("\t0- Exit program\n");
    
    printf("\nEnter your selection: ");

    
    return 0;
}