#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{  
    FILE *createfile;
    char filename[100];
    char command[100];
    int start;
    char new[255];

    
    printf("Open gradebook (0)\n");
    printf("Create new gradebook (1)\n");
    printf("Enter your choice: ");
    scanf("%d", &start);

    switch (start)
    {
        case 0:
            printf("Enter a name of your gradebok\n");
            scanf("%99s", &filename);
            if (access(filename, F_OK) == 0) {
                snprintf(command, sizeof(command), "vim %s", filename);
                int firstresult = system(command);
            }
            else {
                printf("File does not exist.\n");
            }
            break;
        case 1:
            printf("Enter a name of your new gradebook\n");
            scanf("%99s", &new);
            createfile = fopen(new, "w");
            snprintf(command, sizeof(command), " vim %s", new);
            int secondresult = system(command);
            break;
            
    }

    return 0;
}
