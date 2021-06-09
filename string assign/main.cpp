#include <iostream>
#include <string>

using namespace std;

int main() {

    string string1 = "the string";
    string string2;
    string2.assign(string1);
    cout << string1 << endl;
    cout << string2 << endl;
    char char1[]={'h','o','w','a','r','e'};
    string string3;
    string3.assign(char1);
    cout<<string3<<endl;
    return 0;
}
