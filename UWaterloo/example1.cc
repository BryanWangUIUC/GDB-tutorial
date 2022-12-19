#include<iostream>

void crash(int *i) {
    *i = 1;
}

void f(int *i) {
    int *j = i;
    //
    //
    crash(j);
}

int main() {
    int i;
    // std::cout << &i << std::endl;
    f(&i);
    // std::cout << i << std::endl;
    // int* null_ex = nullptr;
    // crash(null_ex);
}