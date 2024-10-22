#include <iostream>
#include <cmath>

bool isPrime(int num, int div = 2) {
    // Base cases
    if (num <= 1) {
        return false;
    }
    if (div > sqrt(num)) {
        return true;
    }
    if (num % div == 0) {
        return false;
    }

    // Recursively check for divisibility
    return isPrime(num, div + 1);
}

int main() {
    // Example usage
    int num = 13; // You can change the value of num to test different integers
    bool result = isPrime(num);

    if (result) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
