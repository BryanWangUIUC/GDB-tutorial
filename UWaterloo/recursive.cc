#include<iostream>

int factorial(const int &n) {
    if (n) {
        return n * factorial(n - 1);
    } else {
        return 1; 
    }
}

int main() {
    int n;

    std::cout << "Please enter a positive number: ";
    if (std::cin >> n && n >= 0) {
        std::cout << n << "! = " << factorial(n) << std::endl;
    } else {
        std::cout << "Invalid!" << std::endl;
    }
}