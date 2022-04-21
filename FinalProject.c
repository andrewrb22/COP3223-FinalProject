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