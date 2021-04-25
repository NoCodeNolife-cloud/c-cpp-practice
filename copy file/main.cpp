#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

int main () {
	// open file
	std::fstream fin ( "in.txt" , std::ios::in );
	std::fstream fout ( "out.txt" , std::ios::out );

	// declare istream iterator
	std::istream_iterator<std::string> fileReader ( fin );
	std::istream_iterator<std::string> fileeof;

	// declare ostream iterator
	std::ostream_iterator<std::string> fileWriter ( fout , " " );

	// string vector
	std::vector<std::string> vec;

	// read file by istream iterator
	while ( fileReader != fileeof ) {
		std::string tmp = *fileReader;
		vec.push_back ( tmp );
		++fileReader;
	}

	// copy the file and write to the another file
	std::copy ( vec.begin () , vec.end () , fileWriter );

	// exit
	return 0;
}