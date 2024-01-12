#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;

//functions for arithmetic operations
float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

//main function
int main() {
	
	//variable declaration
	float a, b;
	char operation;
	
	//Title
	printf("===============================\n");
	printf("|    Scientific Calculator    |\n");
	printf("===============================\n");
	
	//First Number Input
	printf("Enter first number: \n");
	scanf("%f", &a);
	
	//Operator Input
	printf("Enter operator: \n");
	printf("Enter + for Addition\n");
	printf("Enter - for Subtraction\n");
	printf("Enter * for Multiplication\n");
	printf("Enter / for Division\n");
	
	operation = getche();
	
	if (operation == '+' || operation == '-' || operation == '*' ||
        operation == '/') {
		
        printf("\nEnter second number: \n");
        scanf("%f", &b);
    } else {
    	printf("\nInvalid Operator!!");
	}

switch (operation) {
        case '+':
            printf("Result: %f\n", addition(a, b));
            break;
        case '-':
            printf("Result: %f\n", subtraction(a, b));
            break;
        case '*':
            printf("Result: %f\n", multiplication(a, b));
            break;
        case '/':
            printf("Result: %f\n", division(a, b));
            break;
        }

	return 0;
}

float addition(float a, float b) {
	return a + b;
}

float subtraction(float a, float b) {
	return a - b;
}

float multiplication(float a, float b) {
	return a * b;
}

float division(float a, float b) {
	if (b != 0) {
		return a / b;
	} else {
		printf("Error: Division by zero\n");
		return 0;
	}
}


