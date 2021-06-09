#include <iostream>
#include <string>

using namespace std;

int main() {

    // create
    string string1 = "left";
    string string2 = "right";
    // print
    cout << string1 << endl << string2 << endl;
    // swap
    string1.swap(string2);
    cout << string1 << endl << string2 << endl;
    // exit
    return 0;
}
