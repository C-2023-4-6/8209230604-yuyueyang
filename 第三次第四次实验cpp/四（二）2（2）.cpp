#include <iostream>

int parseHex(const char* const hexString) {
    int length = 0;
    while (hexString[length] != '\0') {
        length++;
    }

    int result = 0;
    int base = 1;

    for (int i = length - 1; i >= 0; i--) {
        if (hexString[i] >= '0' && hexString[i] <= '9') {
            result += (hexString[i] - '0') * base;
        }
        else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
            result += (hexString[i] - 'A' + 10) * base;
        }
        else if (hexString[i] >= 'a' && hexString[i] <= 'f') {
            result += (hexString[i] - 'a' + 10) * base;
        }
        base *= 16;
    }

    return result;
}

int main() {
    const char* hexString = "A5";
    int decimal = parseHex(hexString);
    std::cout << "Hexadecimal: " << hexString << std::endl;
    std::cout << "Decimal: " << decimal << std::endl;

    return 0;
}