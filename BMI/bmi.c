#include <stdio.h>

int main()
{
    float worldheight;
    float worldweight;
    float americanheight;
    float americanweight;
    int choice;

    printf("Hello in BMI calculator\n");
    printf("cm/kg(0) feet/lbs(1)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 0) {
        printf("Enter your height: ");
        scanf("%f", &worldheight);
        printf("Enter your weight: ");
        scanf("%f", &worldweight);
        float worldheightm2 = (worldheight / 100.0) * (worldheight / 100.0);
        printf("Your BMI is: %.1f\n", worldweight / worldheightm2);
    }
    else if (choice == 1) {
        printf("Enter your height: ");
        scanf("%f", &americanheight);
        printf("Enter your weight: ");
        scanf("%f", &americanweight);
        float tocm =  americanheight * 0.3048;
        float tokg =  americanweight * 0.453592;
        float americanheightm2 = tocm * tocm;
        printf("Your BMI is: %.1f\n", tokg / americanheightm2);
    }
    else {
        printf("You can choose only 0 or 1");
    }


    return 0;
}
