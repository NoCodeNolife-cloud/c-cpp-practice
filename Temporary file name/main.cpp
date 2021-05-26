#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    string filename, basename, extname, tmpname;
    const string suffix("tmp");// 后缀名

    // 命令行参数
    for (int i = 1; i < argc; ++i) {

        filename = argv[i];// 每个命令行参数

        string::size_type idx = filename.find('.');// 查找'.'
        if (idx == string::npos) {// 没有找到'.'

            tmpname = filename + '.' + suffix;// 直接添加'.'
        } else {// 查找到'.'

            // substr
            basename = filename.substr(0, idx);
            extname = filename.substr(idx + 1);

            if (extname.empty()) {// 没有后缀名

                tmpname = filename;// 存储后缀名
                tmpname += suffix;
            } else if (extname == suffix) {// 如果后缀名是'.tmp'

                tmpname = filename;// 存储后缀名
                tmpname.replace(idx + 1, string::npos, "xxx");// 更换后缀名
            } else {

                tmpname = filename;// 存储后缀名
                tmpname.replace(idx + 1, string::npos, suffix);// 更换后缀名
            }
        }

        cout << filename << " => " << tmpname << endl;// 输出数据
    }
}
