#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{  
    FILE *createfile;
    char filename[100];
    char command[100];
    int start;
    char newfile[255];

    
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
                if (firstresult != 0) {
                    printf("Error: Command failed with return code %d\n", firstresult); 
                }
            }
            else {
                printf("File does not exist.\n");
            }
            break;
        case 1:
            printf("Enter a name of your new gradebook\n");
            scanf("%99s", &newfile);
            createfile = fopen(newfile, "w");
            if (createfile == NULL) {
                printf("Error: Could not create a file");
            }
            else {
                snprintf(command, sizeof(command), "vim %s", newfile);
                int secondresult = system(command);
                fclose(createfile);
                if (secondresult != 0) {
                    printf("Error: Command failed with return code %d\n", secondresult); 
                }
            }
            break;
            
    }

    return 0;
}
