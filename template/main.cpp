#include <iostream>
#include <Windows.h>
#include "container.h"

using namespace std;

int main(char argc, char* argv[]) {
	Container<> ccontainer(5);/*default template parameter, size is five*/
	/*Container<> ccontainer();      size is zero*/
	ccontainer.Show();
	cout << "min = " << ccontainer.getMin() << endl;
	cout << "max = " << ccontainer.getMax() << endl;
	cout << "length = " << ccontainer.getLength() << endl;
	cout << "sum = " << ccontainer.getSum() << endl;
	cout << "average = " << ccontainer.getAverage() << endl;
	cout << "sorting";
	ccontainer.sortToLess();
	cout << "---------->done\n";
	ccontainer.Show();
	cout << "median = " << ccontainer.getMedian() << endl;
	system("pause");
	return 0;
}