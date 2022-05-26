#include <iostream>
#include "externValue.h"

int externX = 10;

int main() {
    printX();
    externX = 100;
    printX();
    return 0;
}
