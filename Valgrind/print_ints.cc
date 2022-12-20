#include<iostream>

int main() {
    int count = 0;
    std::cout << "Enter number of ints to expect: ";
    std::cin >> count;
    int *array = new int[count];
    for (int i = 0; i < count; i++) {
        std::cin >> array[i];
    }
    
    std::cout << "Done reading ints: ";
    for (int i = 0; i < count; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    delete [] array;
    
    return 0;
}