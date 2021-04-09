#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<vector<int>> result(10);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 4; j++) {
			result[i].push_back(i * j);
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 4; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}