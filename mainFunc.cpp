#include <iostream>
#include "cmath"

inline void printExpression(double num, char oper, int count){
    while(count < 99){
        std::cout << "Enter the number\n";
        std::cin >> num;
        std::cout << "Enter the operation\n";
        std::cin >> oper;

        if(oper == '='){
            break;
        }

        switch(oper){
            case '+': std::cout << "+";
            break;
                
            case '-': std::cout << "-";
            break;

            case '*': std::cout << "*";
            break;

            case '/': std::cout << "/";
            break;

            case '^': std::cout << "^";
            break;
        }
        count++;
    }
    
}

double add(double num, int count){
    while(count < 99){
        
    }
}