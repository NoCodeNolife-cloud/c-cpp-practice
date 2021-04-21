#include <fstream>
#include <iostream>
#include <map>

template <class _Ty = void>
struct cmp {
	bool operator()( const _Ty& _Left , const _Ty& _Right ) const {
		return _Left < _Right;
	}
};

int main () {
	// open file
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );
	std::fstream fin ( "in.bin" , std::ios::in | std::ios::binary );

	// assign map
	std::multimap<int , int , cmp<int> >map_save;

	// save as map
	while ( !fin.eof () ) {
		int tmp_a , tmp_b;
		fin >> tmp_a >> tmp_b;
		map_save.insert ( std::make_pair ( tmp_a , tmp_b ) );
	}

	// save results
	for ( std::pair<int , int> item : map_save ) {
		fout << item.first << " " << item.second << std::endl;
	}

	// close file
	fout.close ();
	fin.close ();

	// exit
	system ( "PAUSE" );
	std::exit ( EXIT_SUCCESS );
}