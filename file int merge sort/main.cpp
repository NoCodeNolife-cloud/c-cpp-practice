#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void readFile(fstream &fin, vector<int> &vec) {
    int item;
    while (fin >> item) {
        vec.push_back(item);
    }
}

void writeFile(fstream &is, vector<int> &vec) {
    for(auto item:vec){
        is<<item<<" ";
    }
}

ostream &operator<<(ostream &os, vector<int> &vec) {
    for (auto item:vec) {
        os << item << " ";
    }
    return os;
}

void merge(vector<int> &vec, int left, int middle, int right) {
    vector<int> temp;
    int i = left;
    int j = middle + 1;
    while (i <= middle && j <= right) {
        if (vec[i] < vec[j]) {
            temp.push_back(vec[i++]);
        } else {
            temp.push_back(vec[j++]);
        }
    }
    while (i <= middle) {
        temp.push_back(vec[i++]);
    }
    while (j <= middle) {
        temp.push_back(vec[j++]);
    }
    for (int i = 0; i < temp.size(); i++) {
        vec[left + i] = temp[i];
    }
}

void mergeSort(vector<int> &vec, int left, int right) {
    if (left == right) {
        return;
    }
    int middle = (left + right) / 2;
    mergeSort(vec, left, middle);
    mergeSort(vec, middle + 1, right);
    merge(vec, left, middle, right);
}

int main() {
    fstream fin("file.txt", ios::in);
    vector<int> vec;
    readFile(fin, vec);
    cout << vec << endl;
    mergeSort(vec, 0, vec.size() - 1);
    cout << vec << endl;
    fin.close();
    fin.open("file.txt",ios::out|ios::app);
    fin<<endl;
    writeFile(fin,vec);
    return 0;
}
