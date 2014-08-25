#include <iostream>
//use Module-Definition File (.def)

extern "C"
{
	int Add(int a, int b){
		return (a + b);
	}
	void Function(void){
		std::cout << "DLL Called!" << std::endl;
	}
}
