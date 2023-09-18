//
//  main.cpp
//  HM - 21
//
//  Created by Дмитрий Сергеевич on 18.09.2023.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int X, Y;
    std::cout << "Введите X -> ";
    std::cin >> X;
    std::cout << "Введите Y -> ";
    std::cin >> Y;
    int* px = &X;
    int* py = &Y;
    int temp = *px;
    *px = *py;
    *py = temp;
    std::cout << "X = " << X <<std::endl;
    std::cout << "Y = " << Y << std::endl;
    
    
    
    return 0;
}
