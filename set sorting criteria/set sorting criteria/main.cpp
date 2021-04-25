#include <iostream>
#include <iomanip>
#include <fstream>
#include <set>
#include "Point.h"

class Sort {
public:
	bool operator()( const Point& _left , const Point& _right )const {
		if ( _left.x > _right.x ) {
			return true;
		} else if ( _left.x == _right.x and _left.y > _right.y ) {
			return true;
		} else {
			return false;
		}
		/*
		if ( _left.x != _right.x ) {
			return _left.x < _right.x;
		} else {
			return _left.y < _right.y;
		}

		*/
	}
};

int main () {
	srand ( time ( NULL ) );
	std::fstream fout ( "out.txt" , std::ios::app );
	std::multiset<Point , Sort> set_test;

	for ( int i = 0; i < 100; ++i ) {
		set_test.insert ( Point ( rand () % 100 , rand () % 100 ) );
	}

	for ( std::set<Point>::iterator pos = set_test.begin (); pos != set_test.end (); ++pos ) {
		fout << std::setw ( 5 ) << std::left << pos->x << pos->y << std::endl;
	}

	fout.close ();
}