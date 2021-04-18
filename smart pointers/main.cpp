#include <iostream>
#include <memory>

namespace cod {
	class Test {
	private:
		std::shared_ptr<char> shared_ptr_one;
	public:
		Test ( std::shared_ptr<char> para_shared_ptr_one ) {
			shared_ptr_one = para_shared_ptr_one;
		}

		void func () {
			*shared_ptr_one = 'j';
		}
	};
}

int main () {
	std::shared_ptr<char> ptr;
	ptr.reset ( new char ( 'k' ) );

	cod::Test c_test ( ptr );
	c_test.func ();

	std::cout << *ptr << std::endl;

	system ( "PAUSE" );
	return 0;
}