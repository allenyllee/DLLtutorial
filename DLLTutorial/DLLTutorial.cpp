#include <iostream>

//Use __declspec, a Microsoft-specific keyword

#define DLLTUTORIAL_EXPORT
#include "DLLTutorial.h"

extern "C"
{
	DECLDIR int Add(int a, int b){
		return (a + b);
	}
	DECLDIR void Function(void){
		std::cout << "DLL Called!" << std::endl;
	}

}