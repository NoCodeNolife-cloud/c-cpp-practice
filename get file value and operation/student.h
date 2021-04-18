#pragma once
#include <memory>
#include <string>

namespace cod {
	// student class
	class Student {
	private:
		std::string name;
		int number;
		int score;
	public:
		// constructor
		explicit Student ( std::string para_name , int para_number , int para_score );

		// destructor
		~Student ();

		// get name
		std::string getName ();

		// get number
		int  getNumber ();

		// get score
		int  getScore ();
	};
}
