#include <stdio.h>

int main()
{
    FILE *gradebook;
    FILE *gradebookname;
    char grade;
    int menu;
    char bookname[100];
    int grademenu;
    char subject[100];
    char reader[100];

    printf("Welocme in grade book\n");
    printf("Create new grade book (0): \n");
    printf("Open grade book (1): \n");
    printf("Type your choice: ");
    scanf("%d", &menu);
    
    if (menu == 0){
        printf("Enter name of your grade book: ");
        scanf("%s", bookname); 
        gradebook = fopen(bookname, "w");
        gradebookname = fopen("gradebookname.txt", "w");
        fprintf(gradebookname, "%s\n",  bookname);

        fclose(gradebook);
        fclose(gradebookname);

        if (gradebook == NULL) {
            printf("Error creating grade book.\n");
            return 1;
        }
    }


    else if (menu == 1){
        gradebook = fopen(bookname, "w");
        printf("Add subject to gradebook (0) \n");
        printf("Add grade to gradebook (1) \n");
        printf("List your subjects (2) \n");
        printf("List your grades (3) \n");
        printf("Type your choice: ");
        scanf("%d", &grademenu);
    }


    switch(grademenu){
        case 0:
            printf("Enter the name of gradebook: ");
            scanf("%s",  &reader);
            gradebook = fopen(reader, "w");
            printf("Enter the subject: ");
            scanf("%s", subject);
            fprintf(gradebook, "%s\n", subject);
            

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
