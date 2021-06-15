#include <iostream>
#include <fstream>

using namespace std;

int main() {

//    file
    fstream file("text.dat", ios::in);

//    target
    string target;

    cout << "input you want to search :";
    cin >> target;

    string tmp;

    while (getline(file, tmp)) {
        if (tmp.find(target) != string::npos) {
            cout << "find!" << endl;
            return 0;
        }
    }

    cout << "not find!" << endl;
    return 0;
}
