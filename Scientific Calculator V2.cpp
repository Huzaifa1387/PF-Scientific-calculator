#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;

//functions for arithmetic operations
float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

//Functions for Trigonometric operations
float sine(float angle);
float cosine(float angle);
float tangent(float angle);
float arcsine(float value);
float arccosine(float value);
float arctangent(float value);

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
	printf("Please Select an operator: \n");
	printf("Enter + for Addition\n");
	printf("Enter - for Subtraction\n");
	printf("Enter * for Multiplication\n");
	printf("Enter / for Division\n");
	
	printf("Enter s for Sine\n");
	printf("Enter c for Cosine\n");
	printf("Enter t for Tangent\n");
	printf("Enter a for Arcsine\n");
	printf("Enter o for Arccosine\n");
	printf("Enter n for Artangent\n");
	
	
	operation = getche();
	
//Operator Check
	if (operation != 's' && operation != 'c' && operation != 't' && operation != 'a' && 
		operation != 'o' && operation != 'n' && operation != 'A' && operation != 'O' && 
		operation != 'N') {
		
        printf("\nEnter second number: \n");
        scanf("%f", &b);
    }

//Output Selection
switch (operation) {

//Arithmetic Operations
		case '+':
			printf("\nResult: %f\n", addition(a, b));
			break;
		case '-':
			printf("\nResult: %f\n", subtraction(a, b));
			break;
		case '*':
			printf("\nResult: %f\n", multiplication(a, b));
			break;
		case '/':
			printf("\nResult: %f\n", division(a, b));
			break;
            
//Trigonometric Operations
		case 's':
		case 'S':
			printf("\nResult: %f\n", sine(a));
			break;
		case 'c':
		case 'C':
			printf("\nResult: %f\n", cosine(a));
			break;
		case 't':
		case 'T':
			printf("\nResult: %f\n", tangent(a));
			break;
		case 'a':
		case 'A':
			printf("\nResult: %f\n", arcsine(a));
			break;
		case 'o':
		case 'O':
			printf("\nResult: %f\n", arccosine(a));
			break;
		case 'n':
		case 'N':
			printf("\nResult: %f\n", arctangent(a));
			break;

//default statement
		default:
			printf("\nError: Invalid operator\n");
			break;
        }

	return 0;
}

//Arithmetic Operations Calculations
//Addition Calculation
float addition(float a, float b) {
	return a + b;
}

//Subtraction Calculation
float subtraction(float a, float b) {
	return a - b;
}

//Multiplication Calculation
float multiplication(float a, float b) {
	return a * b;
}

//Division Calculation
float division(float a, float b) {
	if (b != 0) {
		return a / b;
	} else {
		printf("Error: Division by zero\n");
		return 0;
	}
}

//Trigonometric Calculations
//Sine Calculation
float sine(float angle) {
    return sin(angle);
}

//Cosine Calculation
float cosine(float angle) {
    return cos(angle);
}

//Tangent Calculation
float tangent(float angle) {
    return tan(angle);
}

//Arcsine Calculation
float arcsine(float value) {
    return asin(value);
}

//Arccosine Calculation
float arccosine(float value) {
    return acos(value);
}

//Arctangent Calculation
float arctangent(float value) {
    return atan(value);
}
