#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    double num;
    std::cout << "Введите число: ";
    std::cin >> num;

    double result = num * 20;

    std::cout << "Результат: " << result << std::endl;

    return 0;
}
