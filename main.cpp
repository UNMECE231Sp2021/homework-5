#include <iostream>
#include <string>
#include "GeneralList.h"

int main() {
	List<int> IntListA;
	IntListA.push_back(2);
	IntListA.push_front(4);
	IntListA.print();

	std::cout << std::endl;

	List<int> IntListB(IntListA);
	IntListB.pop_front();
	IntListB.print();

	std::cout << std::endl; 

	// This is the same as doing using StringList = List<std::string>
	typedef List<std::string> StringList;

	StringList StringListC;
	StringListC.push_back("Hi");
	StringListC.push_back("There");
	StringListC.push_back("!");
	StringListC.print();
	std::cout << StringListC.front() << " " << StringListC.back() << std::endl;
	StringListC.pop_back();
	StringListC.print();

	std::cout << std::endl;

	// This is the same as doing: typedef List<float> FloatList
	using FloatList = List<float>;

	FloatList FloatListD;
	if(FloatListD.empty()) {
		FloatListD.push_front(3.14);
		FloatListD.push_front(8.9);
		FloatListD.push_front(7.2);
		FloatListD.push_back(5.6);
	}
	FloatListD.print();

	FloatList FloatListE=FloatListD;
	FloatListE.print();

	// Uncomment to test == and != operators (it is not mandatory)

	/*

	if(FloatListE==FloatListD) {
		std::cout << "Float vectors are the same!" << std::endl;
	}

	FloatListE.push_front(1.0);

	if(FloatListE!=FloatListD) {
		std::cout << "Float vectors are not the same!" << std::endl;
	}
	*/

	return 0;
}
