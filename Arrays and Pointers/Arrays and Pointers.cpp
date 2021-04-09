#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream out("out.txt", ios::out);
	//*(str+i)=str[i]
	out << "用指针访问一维数组:" << endl;
	int str[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		out << *(str + i) << "  ";
	}
	out << endl;
	//*(*(arr+i)+j)=arr[i][j]
	out << "用指针访问二维数组:" << endl;
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			out << *(*(arr + i) + j) << "  ";
		}
	}
	out << endl;
	//new
	out << "创建动态一维数组:" << endl;
	int len_1;
	cout << "一维数组长度:";
	cin >> len_1;
	out << "一维数组长度:" << len_1 << endl;
	int* str_1 = new int[len_1];
	for (int i = 0; i < len_1; i++) {
		*(str_1 + i) = i + 1;
	}
	for (int i = 0; i < len_1; i++) {
		out << *(str_1 + i) << "  ";
	}
	out << endl;
	//new
	out << "创建动态二维数组:" << endl;
	int arr_len_i, arr_len_j;
	cout << "二维数组长宽:";
	cin >> arr_len_i >> arr_len_j;
	out << "长 = " << arr_len_i << "\t" << "宽 = " << arr_len_j << endl;
	int** arr_1 = new int* [arr_len_i];
	for (int i = 0; i < arr_len_i; i++) {
		arr_1[i] = new int[arr_len_j];
	}
	for (int i = 0; i < arr_len_j; i++) {
		for (int j = 0; j < arr_len_i; j++) {
			*(*(arr_1 + j) + i) = (i + 1) * (j + 1);
		}
	}
	for (int i = 0; i < arr_len_j; i++) {
		for (int j = 0; j < arr_len_i; j++) {
			out << *(*(arr_1 + j) + i) << "  ";
		}
		out << endl;
	}
	out << endl;
	for (int i = 0; i < arr_len_i; i++) {
		delete[]arr_1[i];
	}
	delete[]arr_1;
	return 0;
}