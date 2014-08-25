#include <iostream>
#include "..\DLLTutorial\DLLTutorial.h"
#pragma comment (lib, "..\\Debug\\DLLTutorial.lib")

int main(){
	Function();
	std::cout << Add(12, 34) << std::endl;
	std::cin.get();
	
	return 0;
}