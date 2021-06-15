#include <bits/stdc++.h>

using namespace std;

int main() {

    filebuf filebuf1;
    ostream output(&filebuf1);
    istream input(&filebuf1);

    filebuf1.open("text.dat", ios::in | ios::out | ios::trunc);

    for (int i = 0; i <= 5; ++i) {

        output << i << endl;
        input.seekg(0);
        char c;
        while (input >> c) {
            cout << c;
        }
        input.clear();
    }

    return 0;
}
