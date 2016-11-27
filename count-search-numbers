#include <iostream>

typedef unsigned short int number;

number sumOfBinaryDigits(number n) {
    number sum = 0;
    for(number i = 0; i < 15; ++i) {
        sum += (n & (1 << i)) >> i;
    }
    return sum;
}

int main() {
    number counter = 0;
    for(number i = 1; i < 8192; ++i) {
        if((sumOfBinaryDigits(i + 1) * 3) == sumOfBinaryDigits(i)) {
            counter++;
        }
    }
    std::cout << counter << std::endl;

    return 0;
}
