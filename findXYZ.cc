#include <iostream>

typedef unsigned short number;

number calculateNumber(number a, number b, number c) {
    return c + (b * 7) + (a * 49);
}

void print(char c, number n) {
    std::cout << c << " = " << n << std::endl;
}

int main() {
    for(number x = 2; x < 7; ++x) {
        for(number y = 1; y < x; ++y) {
            for(number z = 1; z < 7; ++z) {
                if((calculateNumber(x, y, y) - calculateNumber(y, y, x)) == calculateNumber(z, x, z)) { //equiv. with if(((41 * x) - (48 * y)) == (50 * z)) {
                    print('X', x);
                    print('Y', y);
                    print('Z', z);
                }
            }
        }
    }

    return 0;
}
