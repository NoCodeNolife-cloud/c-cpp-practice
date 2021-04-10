#include "head.h"

int main()
{
	function func;
	person per;
	func.initialperson(per);
	func.show(per);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}