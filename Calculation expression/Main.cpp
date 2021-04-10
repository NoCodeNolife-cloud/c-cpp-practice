#include "head.h"

int main()
{
	function func;
	func.caculate();
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}