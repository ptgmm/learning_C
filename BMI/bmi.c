#include <stdio.h>

int main()
{
    float worldheight;
    float worldweight;
    float americanheight;
    float americanweight;
    float worldheightm2 = worldheight * worldheight;
    float americanheightm2 = americanheight * americanheight;
    int choice;

    printf("Hello in BMI calculator\n");
    printf("cm/kg(0) inch/lbs(1)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 0) {
        printf("Enter your height: ");
        scanf("%f", &worldheight);
        printf("Enter your weight: ");
        scanf("%f", &worldweight);
        printf("Your BMI is: %f", worldweight / worldheightm2);
    }
    else if (choice == 1) {
        printf("Enter your height: ");
        scanf("%f", &americanheight);
        printf("Enter your weight: ");
        scanf("%f", &americanweight);
        printf("Your BMI is: %f", americanweight / americanheightm2);
    }
    else {
        printf("You can choose only 0 or 1");
    }


    return 0;
}
