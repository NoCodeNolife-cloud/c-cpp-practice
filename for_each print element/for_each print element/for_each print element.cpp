#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
class print {
private:
	int num;
public:
	print () {
		num = 0;
	}

	void operator()( const T& _value ) {
		num++;
		std::cout << _value << " ";
	}
	int getNum () {
		return num;
	}
};

int main () {
	srand ( time ( NULL ) );// random
	std::vector<int> coll ( 100 );// declare vector

	// insert
	for ( int& item : coll ) {
		item = rand () % 100;
	}

	print<int> c_print = std::for_each ( coll.begin () , coll.end () , print<int> () );// print item
	std::cout << std::endl << c_print.getNum () << std::endl;// print num
	system ( "PAUSE" );
}