#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int integer;
    cout << "输入十进制数:";
    cin >> integer;

    string str;
    while (integer > 0) {
        if (integer % 16 < 10) {
            str.push_back(integer % 16 + '0');
        } else {
            str.push_back(integer % 16 - 10 + 'A');
        }
        integer/=16;
    }
    reverse(str.begin(), str.end());

    cout << "十六进制为:" << str << endl;
    return 0;
}
