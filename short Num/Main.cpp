#include "head.h"

int main()
{
	short Num[10];
	function func;
	func.initial(Num, 10);
	func.print(Num, 10);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}