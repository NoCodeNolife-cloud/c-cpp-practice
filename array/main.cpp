#include <fstream>
#include <algorithm>
#include <functional>

int main () {
	int coll [] = { 5,6,2,4,1,3 };

	// open file
	std::fstream fout ( "out.txt" , std::ios::out );

	// square all elements
	std::transform ( coll , coll + 6 , coll , coll , std::multiplies<int> () );

	std::sort ( coll + 1 , coll + 6 );

	// print all elements
	std::copy ( coll , coll + 6 , std::ostream_iterator<int> ( fout , " " ) );
	fout << std::endl;

	// exit
	return 0;
}