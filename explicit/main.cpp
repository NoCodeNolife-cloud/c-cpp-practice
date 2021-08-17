#include <iostream>

using namespace std;

class Test1 {
public :
    Test1(int num) : n(num) {}

private:
    int n;
};

class Test2 {
public :
    explicit Test2(int num) : n(num) {}

private:
    int n;
};

class Base {
private:
    int x;
public:
    explicit Base(int x) : x(x) {}
};

int main() {
    Test1 t1 = 12;
    Test2 t2(13);
    //无法从“int”转换为“Test2”。而t1却编译通过。注释掉t3那行，调试时，t1已被赋值成功。
    // Test2 t3 = 14;

    Base base1(5);
    Base base2 = base1;

    return 0;
}