#include <iostream>
#include <cmath>
#include "main.hpp"

inline void printExpression(double result, int count, char oper, double num){
    std::cout << "Enter the number\n";
    std::cin >> result;

    while(count < 99){
        std::cout << "Enter the operation\n";
        std::cin >> oper;

        if(oper == '='){
            break;
        }

        std::cout << "Enter number: \n";
        std::cin >> num;

        switch(oper){
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                if (num != 0) {
                    result /= num;
                } else {
                    std::cout << "Error: Division on zero\n";
                }
                break;
            default:
                std::cout << "Incorrect operator. Try again\n";
                continue;
        }
    }

}
