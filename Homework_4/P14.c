#include <stdio.h>
#include <stdlib.h>
#define STUDENT 3
#define EXAM 4

void printer(const int grade[][EXAM], int pupil, int test);
int min(const int grade[][EXAM], int pupil, int test);
int max(const int grade[][EXAM], int pupil, int test);
double avg(const int setgrade[], int test);

int main()
{
    int student;
    const int sGrade[STUDENT][EXAM] =
    {{67,89,90,79},{80,90,94,85},{78,87,98,70}};

    printf("Array:\n");
    printer(sGrade, STUDENT, EXAM);

    printf("\n\nLowest grade: %d\nHighest grade: %d\n", min(sGrade, STUDENT, EXAM), max(sGrade, STUDENT, EXAM));

    for (student = 0; student < STUDENT; student++)
    {
        printf("The average score of student %d is: %.2f\n", student, avg(sGrade[student], EXAM));
    }

    system ("pause");
    return 0;
}

void printer(const int grade[][EXAM], int pupil, int test)
{
    int i, j;

    printf("         [0]   [1]   [2]   [3]");

    for (i = 0; i < pupil; i++)
    {
        printf("\nsGrade[%d] ", i);
        for (j = 0; j < test; j++)
        {
            printf("%-5d ", grade[i][j]);
        }
    }
}

int min(const int grade[][EXAM], int pupil, int test)
{
    int i, j;
    int low = 100;

    for (i = 0; i < pupil; i++)
    {
        for (j = 0; j < test; j++)
        {
            if (grade[i][j]<low)
                low = grade[i][j];
        }
    }
    return low;
}

int max(const int grade[][EXAM], int pupil, int test)
{
    int i, j;
    int high = 0;

    for (i = 0; i < pupil; i++)
    {
        for (j = 0; j < test; j++)
        {
            if (grade[i][j]>high)
                high = grade[i][j];
        }
    }
    return high;
}

double avg(const int setgrade[], int test)
{
    int i;
    int total = 0;

    for (i = 0; i < test; i++)
    {
        total += setgrade[i];
    }

    return (double)total/test;
}
