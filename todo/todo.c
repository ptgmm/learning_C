#include <string.h>
#include <stdio.h>
int main()
{
    char task[20];
    char list[10][20];
    printf("Add task: \n");
    fgets(task, sizeof(task), stdin);
    strcpy(list[0], task);
    printf("You add %s\n", list[0]);
    return 0;
}




