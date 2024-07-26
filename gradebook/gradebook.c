#include <stdio.h>

int main()
{
    FILE *fp;
    char grade;
    int menu;
    char bookname[100];
    int grademenu;


    printf("Welocme in grade book\n");
    printf("Create new grade book (0): \n");
    printf("Open grade book (1): \n");
    printf("Type your choice: ");
    scanf("%d", &menu);
    
    if (menu == 0){
        printf("Enter name of your grade book: ");
        scanf("%s", bookname); 
        fp = fopen (bookname, "w");

        if (fp == NULL) {
            printf("Error creating grade book.\n");
            return 1;
        }
    }
    else if (menu == 1){
        fp = fopen(bookname, "w");
        printf("Add subject to gradebook (0) \n");
        printf("Add grade to gradebook (1) \n");
        printf("List your subjects (2) \n");
        printf("List your grades (3) \n");
        printf("Type your choice: ");
        scanf("%d", &grademenu);
    }

    printf("Enter a grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect");
            break;
        case 'B':
            printf("Very good");
            break;
        case 'C':
            printf("Okay");
            break;
        case 'D':
            printf("At least it's not a F");
            break;
        case 'F':
            printf("You failed");
            break;
        default:
            printf("Please enter only grade");
        }


    return 0;

}
