#include "sdt.h"
#include <iostream>

int main() {
    int a, b;
    std::cout << "������� ��� �����: ";
    std::cin >> a >> b;
    int difference = a - b;
    std::cout << "�����: " << a + b << std::endl;
    cout << "The difference of the numbers is: " << difference << endl;
    return 0;
}
