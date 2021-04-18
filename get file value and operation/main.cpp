// head
#include <iostream>
#include <fstream>
#include <vector>
#include "student.h"
#include "function.h"

int main () {
	// vector
	std::vector<cod::Student> vec;

	// open file
	std::fstream fin ( "resource.txt" , std::ios::in );
	std::fstream fout ( "out.txt" , std::ios::out );

	// get the value
	std::string tmp_str;
	int tmp_number;
	int tmp_score;
	while ( !fin.eof () ) {
		std::getline ( fin , tmp_str );
		fin >> tmp_number >> tmp_score;
		fin.ignore ();
		cod::Student tmp_stu ( tmp_str , tmp_number , tmp_score );
		vec.push_back ( tmp_stu );
	}

	// print
	for ( cod::Student item : vec ) {
		fout << item.getName () << std::endl << item.getNumber () << std::endl << item.getScore () << std::endl;
	}

	// get average
	fout << "the average is " << cod::getAvg ( vec ) << std::endl;

	// get max student
	fout << "the max score student is " << ( cod::getMax ( vec ) ).getName () << std::endl;

	fin.close ();
	system ( "PAUSE" );
	return 0;
}