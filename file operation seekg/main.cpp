#include <bits/stdc++.h>

using namespace std;

void printFileTwice(const char *filename);

int main(int argc, char *argv[]) {

//    two times
    for (int i = 1; i < argc; ++i) {
        printFileTwice(argv[i]);
    }
    return 0;
}

/**
 * print file contents for twice
 * @param filename const char*
 */
void printFileTwice(const char *filename) {
//    open file
    ifstream file(filename);

//    print contents the first time
    cout << file.rdbuf();

//    seek to the beginning
    file.seekg(0);

//    print contents the beginning
    cout << file.rdbuf();
}
