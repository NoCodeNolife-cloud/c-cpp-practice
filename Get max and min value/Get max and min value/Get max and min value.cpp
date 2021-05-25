#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class RANDOM {

public:

	int operator()()const {

		return rand() % 100;
	}
};

template<typename T>
T getMin(vector<T>vec) {
	
	T min = vec[0];
	for (int i = 1; i < vec.size(); ++i) {

		if (min > vec[i]) {

			min = vec[i];
		}
	}

	return min;
}

template<typename T>
T getMax(vector<T>vec) {
	
	T max = vec[0];
	for (int i = 1; i < vec.size(); ++i) {

		if (max < vec[i]) {

			max = vec[i];
		}
	}

	return max;
}

int main() {

	// 种子
	srand(time(NULL));

	// 生成数组
	vector<int> vec(10);

	// 初始化
	generate(vec.begin(), vec.end(), RANDOM());

	// 打印数组
	for (int item : vec) {

		cout << item << " ";
	}
	cout << endl;

	// 测试函数
	cout << "min = " << getMin(vec) << endl;
	cout << "max = " << getMax(vec) << endl;
}