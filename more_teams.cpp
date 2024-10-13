#include <iostream>

int main() {
    std::string s;
    std::cin >> s;

    int top, qual, member;

    std::cin >> top;
    std::cin >> qual;
    std::cin >> member;

    int b = 2, t = 0;

    if (s == "org") {
        b = 4;
    } else {
        if ((top >= 2) || (member >= 30)) {
            b = 3;
        } else {
            b = 2;
        }
    }

    if (qual >= 60) {
        t = 2;
    } else if (qual >= 30) {
        t = 1;
    } else {
        if (qual < 30) t = 0;
    }

    std::cout << b + t;
}