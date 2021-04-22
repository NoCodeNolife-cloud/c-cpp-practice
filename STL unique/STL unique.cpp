#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

namespace cod {
	template <typename T>
	struct opp {
		bool operator()( const T& _left , const T& _right ) {
			return _left < _right;
		}
	};
}

int main () {
	// open file
	std::fstream fin ( "in.bin" , std::ios::in | std::ios::binary );
	std::fstream fout ( "out.txt" , std::ios::out );

	// vector
	std::vector<int>vec;

	while ( !fin.eof () ) {
		int tmp;
		fin >> tmp;
		vec.push_back ( tmp );
	}

	// print
	fout << "befor sort:";
	for ( int itm : vec ) {
		fout << itm << " ";
	}
	fout << std::endl;

	// sort
	std::sort ( vec.begin () , vec.end () , cod::opp<int> () );

	// print
	fout << "after sort:";
	for ( int itm : vec ) {
		fout << itm << " ";
	}
	fout << std::endl;

	vec.erase ( std::unique ( vec.begin () , vec.end () ) , vec.end () );

	// print
	fout << "after unique:";
	for ( int itm : vec ) {
		fout << itm << " ";
	}
	fout << std::endl;

	// close file
	fin.close ();
	fout.close ();
	// exit
	std::exit ( EXIT_SUCCESS );
}