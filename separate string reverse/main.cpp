#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    string target;
    cout << "target:";
    cin >> target;

    vector<string> res;

    while (!target.empty()) {

        if (target.find(',') != string::npos) {

            string::size_type pos = target.find_first_of(',');
            res.push_back(target.substr(0, pos));
            target.erase(0, pos + 1);
        } else {

            res.push_back(target);
            target.clear();
        }
    }

    for (string& item:res) {

        reverse(item.begin(),item.end());
        cout << item << endl;
    }
}
