#include <stdio.h>

/* Calculate BMI through user input */
int main() {

    // Declare variables
    float weight;
    float height;

    // Run function
    printf("Would you like to use metric units or imperial units? (m/i)\n");
    char c = getchar();
    if (c == 'm') {
        printf("You have chosen metric units.\n");
        printf("Please enter your weight in kilograms (kg):\n");
	scanf("%f", &weight); 
	printf("Please enter your height in meters (m):\n");
	scanf("%f", &height);
	printf("Your weight is %.2f, your height is %.2f, and your BMI is %.2f", weight, height, weight / (height * height));
    }
    else if (c == 'i') {
        printf("You have chosen imperial units.\n");
        printf("Please enter your weight in pounds (lb):\n");
	scanf("%f", &weight);
	printf("Please enter your height in inches (in):\n");
	scanf("%f", &height);
	printf("Your weight is %.2f, your height is %.2f, and your BMI is %.2f", weight, height, weight / (height * height) * 703);
    }
    else {
        printf("Invalid response. Please try again.");
    }
    
    return 0;
}
