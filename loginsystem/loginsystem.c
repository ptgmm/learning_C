//For the program to work, you must create a "login.txt" file

//It looks like this:
//user
//password


#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    int menu;
    char username[100];
    char password[100];
    char loginfile[100];
    char passfile[100];
    printf("Login (0) \n");
    printf("Type your choice: ");
    scanf("%d", &menu);
    getchar();

    if (menu == 0) {
        printf("Username:");
        fgets(username, sizeof(username), stdin);
        username[strcspn(username, "\n")] = '\0';

        printf("Password: ");
        fgets(password, sizeof(password), stdin);
        password[strcspn(password, "\n")] = '\0';


        file = fopen("login.txt", "r");

        if (file == NULL) {
            printf("Error opening file \n");
            return 1;
        }

        fgets(loginfile, 100, file);
        loginfile[strcspn(loginfile, "\n")] = '\0';

        fgets(passfile, 100, file);
        passfile[strcspn(passfile, "\n")] = '\0';

        fclose(file);

        if((strcmp(username, loginfile)== 0) && (strcmp(password, passfile)== 0))  {
            printf("Login successful");
        }
        else {
            printf("Wrong login or password");
        }
    }


    return 0;
}
