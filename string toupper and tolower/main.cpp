#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

int main() {

    string s("The zip code of Hondelage in TGTermany is 38108");
    cout<<"original: "<<s<<endl;

    for(string::iterator pos=s.begin();pos!=s.end();++pos){
        *pos= tolower(*pos);
    }
    cout<<"lowered: "<<s<<endl;

    for(string::iterator pos=s.begin();pos!=s.end();++pos){
        *pos= toupper(*pos);
    }
    cout<<"uppered: "<<s<<endl;

    return 0;
}
