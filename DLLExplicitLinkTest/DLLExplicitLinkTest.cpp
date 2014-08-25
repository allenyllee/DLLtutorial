#include <iostream>
#include <Windows.h>

typedef int(*AddFunc)(int, int);
typedef void(*FunctionFunc)();

int main(){
	AddFunc _AddFunc;
	FunctionFunc _FunctionFunc;

	HINSTANCE hInstLibrarary = LoadLibrary(L"DLLTutorial.dll");

	if (hInstLibrarary){
		_AddFunc = (AddFunc)GetProcAddress(hInstLibrarary,"Add");
		_FunctionFunc = (FunctionFunc)GetProcAddress(hInstLibrarary, "Function");

		if (_AddFunc){
			std::cout << _AddFunc(12, 34) << std::endl;
		}

		if (_FunctionFunc){
			_FunctionFunc();
		}

		FreeLibrary(hInstLibrarary);
	
	}
	else
	{
		std::cout << "DLL failed to load" << std::endl;
	}

	std::cin.get();

	return 0;

}


