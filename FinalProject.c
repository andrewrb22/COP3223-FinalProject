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
List[3].CRN=9696;
strcpy(List[3].course, "COP 100");
List[3].credit_hr=3;
List[4].CRN=1232;
strcpy(List[4].course, "MAC 531");
List[4].credit_hr=5;
List[5].CRN=9856;
strcpy(List[5].course, "STA 100");
List[5].credit_hr=2;
List[6].CRN=8520;
strcpy(List[6].course, "TNV 400");
List[6].credit_hr=5;
List[7].CRN=8977;
strcpy(List[7].course, "CMP 100");
List[7].credit_hr=1;
}
//-----------Search Student Function------------------------//
int searchstudent(student student[],int id,int cnt){

   int i;

for(i=0;i<cnt;i++){

if(student[i].id==id){

return 1;
}
}
return 0;
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