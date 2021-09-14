#include "BigInteger.h"
#include <iostream>

int main(int argc, char** argv) {
    InfInt a(4), b(12), c(a+b);
    std::cout << c.getValue() << std::endl;
    system("pause");
}