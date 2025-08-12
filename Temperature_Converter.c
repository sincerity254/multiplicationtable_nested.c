#include <stdio.h>
#include <math.h>

int main() {
    int choice = 0;
    float celcius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature Converter Calculator.\n");
    printf("1. Convert Celcius to Fahrenheit.\n");
    printf("2. Convert Fahrenheit to Celcius.\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter temperature in Celcius; ");
        scanf("%f", &celcius);
        fahrenheit = (celcius * 9/5) + 32;
        printf("%.1f Celcius is equal to %.1f Fahrenheit.\n", celcius, fahrenheit);
    }

    else if(choice == 2){
        printf("Enter temperature in Fahrenheit; ");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit - 32) * 5/9;
        printf("%.1f Fahrenheit is equal to %.1f Celcius.\n", fahrenheit, celcius);
    }

    else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }
    

    



    return 0;
}