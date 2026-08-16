#include <iostream>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            std::cout << ch;
        }
        std::cout << "\n";
    }

    return 0;
}