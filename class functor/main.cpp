// head
#include <iostream>
#include <fstream>
#include <algorithm>
#include <list>

// class
class AddValue {
private:
	int theValue;
public:
	// constructor initializes the value to add
	AddValue ( int v ) :theValue ( v ) {
		return;
	}

	// the "function call" for the element adds the value
	void operator()( int& elem )const {
		elem += theValue;
	}
};

// main
int main () {
	// list
	std::list<int>coll;

	// insert elements from 1 to 9
	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}

	// print
	std::cout << "initialized:\n";
	for ( int x : coll ) {
		std::cout << x << " ";
	}
	std::cout << std::endl;

	// add value 10 to each element
	std::for_each ( coll.begin () , coll.end () , AddValue ( 10 ) );

	// print
	std::cout << "initialized:\n";
	for ( int x : coll ) {
		std::cout << x << " ";
	}
	std::cout << std::endl;

	// exit
	system ( "PAUSE" );
	std::exit ( EXIT_SUCCESS );
}