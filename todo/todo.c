#include <string.h>
#include <stdio.h>
int main()
{   
    FILE *fptr;
    char taskadd[100];
    fptr = fopen("task.txt", "w");
   
    printf("Add Task: ");
    scanf("%99s", taskadd);

    fprintf(fptr, "%s\n", taskadd);

    fclose(fptr);

    
    return 0;
}




