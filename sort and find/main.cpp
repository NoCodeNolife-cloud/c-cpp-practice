#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

namespace cod {
	// sort
	void quickSort ( std::vector<int>& , int , int );

	// find
	bool find ( std::vector<int>& , int );

	// initialize
	void init ( std::vector<int>& );

	// show vector
	void show ( std::vector<int>& );
}

int main () {
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );// save file

	std::vector<int>vec ( 100 );// create vector
	cod::init ( vec );// initial vector
	cod::quickSort ( vec , 0 , 99 );// quick sort
	cod::show ( vec );// show vector item

	fout << std::boolalpha << cod::find ( vec , 15 );

	fout.close ();// exit
	return 0;
}

namespace cod {
	void quickSort ( std::vector<int>& para_vec , int left , int right ) {
		int tmp_left = left , tmp_right = right;
		int middle = para_vec [ ( left + right ) / 2 ];
		while ( tmp_left <= tmp_right ) {
			while ( para_vec [ tmp_left ] < middle ) {
				tmp_left++;
			}
			while ( middle < para_vec [ tmp_right ] ) {
				tmp_right--;
			}
			if ( tmp_left <= tmp_right ) {
				std::swap ( para_vec [ tmp_left ] , para_vec [ tmp_right ] );
				tmp_left++;
				tmp_right--;
			}
		}
		if ( tmp_left == tmp_right ) {
			tmp_left++;
		}
		if ( tmp_left < right ) {
			cod::quickSort ( para_vec , tmp_right + 1 , right );
		}
		if ( left < tmp_right ) {
			cod::quickSort ( para_vec , left , tmp_left - 1 );
		}
		return;
	}

	bool find ( std::vector<int>& para_vec , int int_target ) {
		int left = 0 , right = para_vec.size () - 1;
		while ( left <= right ) {
			int index = ( left + right ) / 2;
			int middle = para_vec [ index ];
			if ( middle < int_target ) {
				left = index + 1;
			} else if ( int_target == middle ) {
				return true;// int_target = middle , fount
			} else {
				right = index - 1;
			}
		}
		return false;// if not fount
	}

	void init ( std::vector<int>& para_vec ) {
		srand ( time ( NULL ) );
		for ( int& x : para_vec ) {
			x = rand () % 100 + 1;
		}
		return;
	}

	void show ( std::vector<int>& para_vec ) {
		std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );
		for ( int x : para_vec ) {
			fout << std::setw ( 5 ) << std::left << x;
		}
		fout << std::endl;
		fout.close ();
		return;
	}
}