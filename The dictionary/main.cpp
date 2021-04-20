#include <map>
#include <fstream>
#include <string>
#include <iomanip>

int main () {
	// fstream
	std::fstream fout ( "out.txt" , std::ios::out );

	// define multimap type as string/string dictionary
	typedef std::multimap<std::string , std::string> StrStrMMap;

	// create empty dictionary
	StrStrMMap dict;

	// insert some elements in random order
	dict.insert ( std::make_pair ( "day" , "Tag" ) );
	dict.insert ( std::make_pair ( "strange" , "fremd" ) );
	dict.insert ( std::make_pair ( "car" , "Auto" ) );
	dict.insert ( std::make_pair ( "smart" , "elegant" ) );
	dict.insert ( std::make_pair ( "trait" , "Merkmal" ) );
	dict.insert ( std::make_pair ( "strange" , "seltsam" ) );
	dict.insert ( std::make_pair ( "smart" , "raffiniert" ) );
	dict.insert ( std::make_pair ( "smart" , "klug" ) );
	dict.insert ( std::make_pair ( "clever" , "raffiniert" ) );

	// print all element
	StrStrMMap::iterator pos;
	fout.setf ( std::ios::left , std::ios::adjustfield );
	fout << " " << std::setw ( 10 ) << "english " << "german " << std::endl;
	fout << std::setfill ( '-' ) << std::setw ( 20 ) << " " << std::setfill ( ' ' ) << std::endl;
	for ( pos = dict.begin (); pos != dict.end (); ++pos ) {
		fout << " " << std::setw ( 10 ) << pos->first.c_str () << pos->second << std::endl;
	}
	fout << std::endl;

	// print all values for key "smart"
	std::string word ( "smart" );
	fout << word << ": " << std::endl;
	for ( pos = dict.lower_bound ( word ); pos != dict.upper_bound ( word ); ++pos ) {
		fout << "        " << pos->second << std::endl;
	}

	// print all keys for value "raffiniert"
	word = ( "raffiniert" );
	fout << word << ": " << std::endl;
	for ( pos = dict.begin (); pos != dict.end (); ++pos ) {
		if ( pos->second == word ) {
			fout << "       " << pos->first << std::endl;
		}
	}

	// exit
	std::exit ( EXIT_SUCCESS );
}