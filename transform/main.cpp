// head
#include <iostream>
#include <vector>
#include <set>
#include <fstream>
#include <algorithm>

namespace cod {
	// print elements form colleciton
	template<class T>
	inline void PRINT_ELEMENTS ( const T& coll , const char* optcstr = "" );

	// output square
	int square ( int value );
}

int main () {
	std::set<int>coll1;
	std::vector<int>coll2;

	// insert elements from 1 to 9 into coll1
	for ( int i = 1; i <= 9; ++i ) {
		coll1.insert ( i );
	}
	cod::PRINT_ELEMENTS ( coll1 , "initiallized: " );

	// transform each element from coll1 to coll2
	std::transform ( coll1.begin () , coll1.end () , std::back_inserter ( coll2 ) , cod::square );

	cod::PRINT_ELEMENTS ( coll2 , "squared: " );

	// exit
	std::exit ( EXIT_SUCCESS );
}

template<class T>
inline void cod::PRINT_ELEMENTS ( const T& coll , const char* optcstr ) {
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );
	typename T::const_iterator pos;
	fout << optcstr;
	for ( pos = coll.begin (); pos != coll.end (); ++pos ) {
		fout << *pos << " ";
	}
	fout << std::endl;
	fout.close ();
	return;
}

int cod::square ( int value ) {
	return value * value;
}