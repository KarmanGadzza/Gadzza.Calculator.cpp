#include "main.hpp"

int main() {
    setlocale(LC_ALL, "Russian");
//    Calculator calculator;
    double a, b;
    char oper;
    double result;

    std::cout << "Введи первое число\n";
    std::cin >> a;

    std::cout << "Введи второе число\n";
    std::cin >> b;

    std::cout << "Введи операцию + - * / ^\n";
    std::cin >> oper;

switch (oper) {
        case '+':
            std::cout << "Result: " << a + b << std::endl;
            break;
        case '-':
            std::cout << "Result: " << a - b << std::endl;
            break;
        case '*':
            std::cout << "Result: " << a * b << std::endl;
            break;
        case '/':
            if (b != 0) {
                std::cout << "Result: " << a / b << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        case '^':
            std::cout << "Result: " << pow(a, b) << std::endl;
            break;
        default:
            std::cout << "Error: Invalid operator." << std::endl;
            break;
    }

    return 0;
}
