#pragma once
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

template<typename T>
bool cmp(T a, T b);

template<typename T = int>
class Container {
private:
	vector<T> vec;
public:
	/**
	 * @brief constructor function
	*/
	Container(int parasize = 0);
	/**
	 * @brief print number
	*/
	void Show();
	/**
	 * @brief return min
	 * @return T
	*/
	T getMin();
	/**
	 * @brief return max
	 * @return T
	*/
	T getMax();
	/**
	 * @brief return sum
	 * @return T
	*/
	T getSum();
	/**
	 * @brief return length
	 * @return int
	*/
	int getLength();
	/**
	 * @brief return median
	 * @return T
	*/
	T getMedian();
	/**
	 * @brief return average
	 * @return double
	*/
	double getAverage();
	/**
	 * @brief sort greater to less
	*/
	void sortToLess();
};

template<typename T >
inline Container<T>::Container(int parasize) {
	srand(time(NULL));
	for (int i = 0; i < parasize; i++) {
		T temp = rand() / double(RAND_MAX / 100);
		vec.push_back(temp);
	}
	return;
}

template<typename T>
inline void Container<T>::Show() {
	for (T x : vec) {
		cout << setw(8) << left << x;
	}
	cout << endl;
	return;
}

template<typename T>
inline T Container<T>::getMin() {
	if (vec.size() == 0) {
		return NULL;
	}
	T tempmin = vec[0];
	for (int i = 1; i < vec.size(); i++) {
		tempmin = (tempmin > vec[i] ? vec[i] : tempmin);
	}
	return tempmin;
}

template<typename T>
inline T Container<T>::getMax() {
	if (vec.size() == 0) {
		return NULL;
	}
	T tempmax = vec[0];
	for (int i = 1; i < vec.size(); i++) {
		tempmax = (tempmax > vec[i] ? tempmax : vec[i]);
	}
	return tempmax;
}

template<typename T>
inline T Container<T>::getSum()
{
	if (vec.size() == 0) {
		return NULL;
	}
	T sum = vec[0];
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	return sum;
}

template<typename T>
inline int Container<T>::getLength()
{
	return vec.size();
}

template<typename T>
inline T Container<T>::getMedian()
{
	vector<T> tempvec(vec);
	sort(tempvec.begin(), tempvec.end(), cmp<T>);
	return tempvec[vec.size() / 2];
}

template<typename T>
inline double Container<T>::getAverage()
{
	if (vec.size() == 0) {
		return NULL;
	}
	T sum = vec[0];
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	return double(sum) / double(vec.size());
}

template<typename T>
inline void Container<T>::sortToLess()
{
	sort(vec.begin(), vec.end(), cmp<T>);
	return;
}

template<typename T>
inline bool cmp(T a, T b)
{
	return (a > b ? true : false);
}
