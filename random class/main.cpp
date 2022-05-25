#include <iostream>
#include <random>
#include <ctime>

namespace cod {
    template<typename T>
    int randomGenerate(T paraMin, T paraMax) {
        std::seed_seq seedSeq{time(nullptr)};
        static std::default_random_engine defaultRandomEngine(seedSeq);
        std::uniform_int_distribution<T> uniformIntDistribution(paraMin, paraMax);
        return uniformIntDistribution(defaultRandomEngine);
    }
}

int main() {
    for (int i = 0; i < 100; i++) {
        std::cout << static_cast<char>(cod::randomGenerate('a', 'z'));
    }
    std::cout << std::endl;
    for(int i=0;i<100;i++){

    }
    return 0;
}
