#include <stdio.h>

int main ()
{
    int option;
    float cmtoinch;
    float inchtocm;
    printf("cm to inch (0)\n");
    printf("inch to cm (1)\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    if (option == 0) {
        printf("cm: ");
        scanf("%f", &cmtoinch);
        printf("inch: %.1f", cmtoinch * 0.3937008);
    }
    else if (option == 1) {
        printf("inch: ");
        scanf("%f", &inchtocm);
        printf("cm: %.1f", inchtocm * 2.54);
    }
    else {
        printf("Error");
    }



    return 0;



}
