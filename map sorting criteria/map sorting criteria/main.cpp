#include <iostream>
#include <map>
#include <iomanip>
#include <fstream>

template<typename T>
class Sort {
public:
	bool operator()( const T& _left , const T& _right )const {
		return _left > _right;
	}
};

int main () {
	srand ( time ( NULL ) );
	std::fstream fout ( "out.txt" , std::ios::app );
	std::map<int , int , Sort<int>> map_test;

	for ( int i = 0; i < 100; ++i ) {
		map_test.insert ( std::make_pair<int , int> ( rand () % 100 , rand () % 100 ) );
	}

	for ( std::map<int , int>::iterator pos = map_test.begin (); pos != map_test.end (); ++pos ) {
		fout << std::setw ( 5 ) << std::left << pos->first << std::setw ( 5 ) << std::left << pos->second << std::endl;
	}

	fout.close ();
	return 0;
}