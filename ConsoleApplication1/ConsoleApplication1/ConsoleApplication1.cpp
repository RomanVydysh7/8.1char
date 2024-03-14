#include <iostream>
#include <cstring>

int findThirdCommaIndex(const char* str) {
    int commaCount = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ',') {
            commaCount++;
            if (commaCount == 3) {
                return i; 
            }
        }
    }
    return -1; 
}

void replaceCommasWithStars(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ',') {
            str[i] = '*';
            str[i + 1] = '*';
            i++;
        }
    }
}

int main() {
    const int maxSize = 1000; 
    char str[maxSize];

    std::cout << "Input: ";
    std::cin.getline(str, maxSize);

    int commaIndex = findThirdCommaIndex(str);
    if (commaIndex != -1) {
        std::cout << "Index: " << commaIndex << std::endl;

        replaceCommasWithStars(str);
        std::cout << "Width '**': " << str << std::endl;
    }
    else {
        std::cout << "Nothing" << std::endl;
    }

    return 0;
}
