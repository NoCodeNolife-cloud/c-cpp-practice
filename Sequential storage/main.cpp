#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int vec[10];
    for (int i = 0; i < 10; ++i) {
        vec[i] = i;
    }

    cout << setw(5) << left << "value" << "address" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << setw(5) << left << vec[i] << &vec[i] << endl;
    }

    return 0;
}
