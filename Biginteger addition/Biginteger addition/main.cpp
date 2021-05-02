#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <deque>

std::deque<int>transform ( std::string _str , int _index ) {
	std::deque<int>res;

	int carry = 0;
	while ( _str.size () != 0 ) {
		res.push_front ( ( _str [ _str.size () - 1 ] - '0' + carry ) % _index );
		carry = ( _str [ _str.size () - 1 ] - '0' + carry ) / _index;
		_str.pop_back ();
	}

	return res;
}

int main () {
	int index = 10;
	std::deque<int> number1 = transform ( "125" , index );
	std::deque<int> number2 = transform ( "1000" , index );
	std::deque<int> count;

	std::reverse ( number1.begin () , number1.end () );
	std::reverse ( number2.begin () , number2.end () );

	int carry = 0;
	for ( int i = 0; i < number1.size () or i < number2.size () or carry != 0; ++i ) {
		int temp1;
		int temp2;

		if ( i < number1.size () ) {
			temp1 = number1 [ i ];
		} else {
			temp1 = 0;
		}

		if ( i < number2.size () ) {
			temp2 = number2 [ i ];
		} else {
			temp2 = 0;
		}

		count.push_front ( ( temp1 + temp2 + carry ) % index );
		carry = ( temp1 + temp2 + carry ) / index;
	}

	for ( int item : count ) {
		std::cout << item;
	}
	std::cout << std::endl;

	system ( "pause" );
}