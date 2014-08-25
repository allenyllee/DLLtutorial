#ifndef _DLL_TUTORIAL_H_
#define _DLL_TUTORIAL_H_
#include <iostream>

//Use __declspec, a Microsoft-specific keyword
#if defined DLLTUTORIAL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif

extern "C"
{
	DECLDIR int Add(int a, int b);
	DECLDIR void Function(void);
}

#endif