#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <set>

using namespace std;

bool cmp(char _left, char _right) {

    return tolower(_left) < tolower(_right);
}

class CMP {

public:

    bool operator()(const char _left, const char _right) {

        return tolower(_left) < tolower(_right);
    }
};

int main() {

    // 待处理字符串
    const string hello("Hello, how are you?");

    // 生成字符串
    string haddle(hello.begin(), hello.end());

    // 打印原字符串
    cout << haddle << endl;

    // 翻转字符串
    copy(haddle.rbegin(), haddle.rend(), ostream_iterator<char>(cout));
    cout << endl;

    // 字符串排序
    sort(haddle.begin(), haddle.end(), cmp);

    // 打印排序
    copy(haddle.begin(), haddle.end(), ostream_iterator<char>(cout));
    cout << endl;

    // set
    set<char,CMP> collection;
    for (char item:hello) {

        collection.insert(item);
    }

    // 打印排序
    copy(collection.begin(), collection.end(), ostream_iterator<char>(cout));
    cout << endl;

    return 0;
}
