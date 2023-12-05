#include <iostream>

int main() {
    // Writing an error message to cerr
    std::cerr << "This is an error message." << std::endl;

    // Simulating an error condition
    int divisor = 0;
    
    // Checking for division by zero and outputting an error message to cerr
    if (divisor == 0) {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        return 1;  // Indicate an error by returning a non-zero value
    }

    // Normal program flow
    int result = 10 / divisor;
    std::cerr << "Result: " << result << std::endl;

    return 0;
}
