#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main() {

    string string1="TARGET";

    // iterator move
    for(string::iterator pos=string1.begin()+2;pos!=string1.end();++pos){

        cout<<*pos;
    }
    cout<<endl;

    // char
    for(char item:string1){

        cout<<item;
    }
    cout<<endl;

    // reverse iterator
    for(string::reverse_iterator pos1=string1.rbegin(); pos1 != string1.rend(); ++pos1){

        cout<<*pos1;
    }
    cout<<endl;

    return 0;
}
