#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-----------Courses Structure------------------//
typedef struct course
{

    int CRN;
    char course[10];
    int credit_hr;
} course;

//--------------Student Structure-----------------//
typedef struct student
{
    int id;
    char name[100];
    int student_course[10];
    int course_cnt;

} student;

//------------------Courses function----------------//
void initialize(struct course List[])
{

    List[0].CRN = 4587;
    strcpy(List[0].course, "MAT 263");
    List[0].credit_hr = 4;
    List[1].CRN = 4599;
    strcpy(List[1].course, "COP 220");
    List[1].credit_hr = 3;
    List[2].CRN = 8997;
    strcpy(List[2].course, "GOL 124");
    List[2].credit_hr = 1;
    List[3].CRN = 9696;
    strcpy(List[3].course, "COP 100");
    List[3].credit_hr = 3;
    List[4].CRN = 1232;
    strcpy(List[4].course, "MAC 531");
    List[4].credit_hr = 5;
    List[5].CRN = 9856;
    strcpy(List[5].course, "STA 100");
    List[5].credit_hr = 2;
    List[6].CRN = 8520;
    strcpy(List[6].course, "TNV 400");
    List[6].credit_hr = 5;
    List[7].CRN = 8977;
    strcpy(List[7].course, "CMP 100");
    List[7].credit_hr = 1;
}
//-----------Search Student Function------------------------//
int searchstudent(student student[], int id, int cnt)
{

    int i;

    for (i = 0; i < cnt; i++)
    {

        if (student[i].id == id)
        {

            return 1;
        }
    }
    return 0;
}

//---------------Search Course Function---------------------//
int searchcourse(course List[], int course_list_cnt, int id)
{

    int i;

    for (i = 0; i < course_list_cnt; i++)
    {

        if (List[i].CRN == id)

            return 1;
    }

    return 0;
}

//-------------Print Invoice Function-----------------------//
int printFee(student student[], course List[], int student_cnt, int student_id, int course_cnt)
{

    int i;

    float amount = 0;

    for (i = 0; i < student_cnt; i++)

    {

        if (student[i].id == student_id)
        {

            printf("\n\n-------------------\nVALENCE COMMUNTY COLLEGE\nORLANDE FL 10101\n------------");

            printf("\nFee receipt prepared for Student :");

            printf("%d - %s", student[i].id, student[i].name);

            printf("\n credit hr= $120.25");

            printf("\nCRN\t\tCR_PREFIX\tCR_HOURS");

            int j = 0;

            for (j = 0; j <= student[i].course_cnt; j++)
            {

                int k = 0;

                for (k = 0; k <= course_cnt; k++)
                {

                    if (student[i].student_course[j] == List[k].CRN)
                    {

                        amount += 120.25 * List[k].credit_hr;

                        printf("\n%d\t\t%s\t\t%d\t\t$%f", List[k].CRN, List[k].course, List[k].credit_hr, amount);

                        break;
                    }
                }
            }

            printf("\n\t\tHealth and id fees \t\t $ 35.00");

            printf("\n--------------------------------");

            printf("\n\t\tTotal payments=\t\t$%f", (amount + 35));

        } // if

        printf("\n\n");
    }

    return 0;
}

//-----------Main function-----------------------------------//

int main()

{

    int choice;

    course List[100];

    int course_list_cnt = 7; //// i=for initilize

    initialize(List); ////initialize course list

    student student[500];

    int student_cnt = 0; /// no student saved yet

    while (choice != 0)
    {

        printf("Choose form following options:\n1-Add a new student\n2-Add/delete a course\n3-search for a student\n4-Print fee invoice\n0-Exit program\n");

        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
        { //// add student

            int id;

            char name[100];

            printf("\nEnter student id =");

            scanf("%d", &id);

            printf("\nEnter student name =");

            scanf("%s", name);

            student[student_cnt].id = id;

            strcpy(student[student_cnt].name, name);

            int flag = searchstudent(student, id, student_cnt);

            if (flag == 0)
            {

                int no = 0;

                printf("\nEnter How many courses %s have taken =", name);

                scanf("%d", &no);

                int a;

                printf("\nEnter %d courses numbers=", no);

                int i;

                student[student_cnt].course_cnt = 0;

                for (i = 0; i < no; i++)
                {

                    printf("\nEnter course %d id =", i + 1);

                    scanf("%d", &a);

                    if (searchcourse(List, course_list_cnt, a) == 1)
                    {

                        student[student_cnt].student_course[student[student_cnt].course_cnt] = a;

                        student[student_cnt].course_cnt++;

                        printf("\nThe course no %d is available and added successfully", a);

                    } // if

                    else
                    {

                        printf("\nThe course no %d is not available", a);
                    }

                } // for

                student_cnt++;

            } /// if flag==1

            break;
        }

        case 2:

        {

            int id;

            char newchoice;

            printf("\nEnter student id =");

            scanf("%d", &id);

            student[student_cnt].id = id;

            int flag = searchstudent(student, id, student_cnt);

            if (flag == 1)
            {

                printf("\nChoose from :\na.Add new course\nd.Delete a course\nc.cancel operation");

                scanf("%c", &newchoice);

                if (newchoice == 'c')
                {

                    break;
                }

                else if (newchoice == 'a')
                {

                    int a;

                    printf("\nEnter course id");

                    scanf("%d", &a);

                    if (searchcourse(List, course_list_cnt, a) == 1)
                    {

                        student[student_cnt].student_course[student[student_cnt].course_cnt] = a;

                        student[student_cnt].course_cnt++;

                        printf("\nThe course no %d is available and added successfully", a);

                    } // if

                    else
                    {

                        printf("\nThe course no %d is not available", a);
                    }

                } /// else if

                /*

                add module delete course by delete course from Student.course and decrease the Student.course_cnt by 1

                else if(newchoice=='d'){

                }

                */
            }

            else
            {

                printf("\nStudent is not added yet ..\n");
            }

            break;
        }

        case 3:
        {

            int id;

            printf("\nEnter student id =");

            scanf("%d", &id);

            if (searchstudent(student, id, student_cnt) == 1)
            {

                printf("\nStudent has been stored ");
            }

            else

                printf("\nNo Student found");

            break;
        }

        case 4:
        {

            int id;

            printf("\nEnter student id =");

            scanf("%d", &id);

            if (searchstudent(student, id, student_cnt) == 1)
            {

                printFee(student, List, student_cnt, id, course_list_cnt);
            }

            else
            {

                printf("\nStudent have not added");
            }

            break;
        }

        case 0:

            break;
        }
    }

    return 0;
}