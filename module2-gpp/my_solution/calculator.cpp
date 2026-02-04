#include <iostream>
#include "calculator.h"
#include<cmath>
// Copy the function implementations here
// add(), subtract(), multiply(), divide()
// ========== DECLARATIONS ==========
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
double power(int a,int b);
// ========== IMPLEMENTATIONS ==========
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}
double power(int a,int b)
{
return pow(a,b);
}
