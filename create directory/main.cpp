#include <fstream>
#include <string>
#include <iostream>

int main () {
	// print
	std::cout << "enter the file name \n";
	std::string str;
	std::getline ( std::cin , str );// get the line

	std::fstream fout ( str , std::ios::out );

	// exit
	std::exit ( EXIT_SUCCESS );
}