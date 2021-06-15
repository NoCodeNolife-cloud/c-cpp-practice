#include <bits/stdc++.h>

using namespace std;

void writeCharsetToFile(const string &filename);

void outputFile(const string &filename);

int main() {

    writeCharsetToFile("charset.out");
    outputFile("charset.out");
    return 0;
}

/**
 * write character to file
 * @param filename const string
 */
void writeCharsetToFile(const string &filename) {
//    open output file
    ofstream file(filename.c_str());

//    file opened
    if (!file) {
        cerr << "can't open output file \"" << filename << "\"" << endl;
        exit(EXIT_FAILURE);
    }

//    write character set
    for (int i = 32; i < 256; i++) {
        file << "value: " << setw(3) << i << " " << "char: " << static_cast<char>(i) << endl;
    }

    file.close();
}

/**
 * print file contents
 * @param filename
 */
void outputFile(const string &filename) {
//    open input file
    ifstream file(filename.c_str());

//    file opened
    if (!file) {
        cerr << "can't open output file \"" << filename << "\"" << endl;
        exit(EXIT_FAILURE);
    }

//    copy file contents to cout
    char c;
    while (file >> c) {
        cout.put(c);
    }

    file.close();
}