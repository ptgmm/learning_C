#include <stdio.h>

int main()
{
    float cm;
    float kg;
    float feet;
    float pounds;
    int choice;

    printf("Hello in BMI calculator\n");
    printf("cm/kg(0) feet/pounds(1)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 0) {
        printf("Enter your height: ");
        scanf("%f", &cm);
        printf("Enter your weight: ");
        scanf("%f", &kg);
        float cmtom2 = cm * cm / 10000.0;
        printf("Your BMI is: %.2f\n", kg / cmtom2);
    }
    else if (choice == 1) {
        printf("Enter your height: ");
        scanf("%f", &feet);
        printf("Enter your weight: ");
        scanf("%f", &pounds);
        float feettocm =  feet * 0.3048;
        float poundstokg =  pounds * 0.453592;
        float feettom2 = feettocm * feettocm;
        printf("Your BMI is: %.2f\n", poundstokg / feettom2);
    }
    else {
        printf("You can choose only 0 or 1");
    }


    return 0;
}
