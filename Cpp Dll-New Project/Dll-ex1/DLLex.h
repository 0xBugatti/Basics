#ifndef DLLEX_H
#define DLLEX_H

// excludes rarely used things in windows header
#define WIN32_LEAN_AND_MEAN
// windows header file
#include <windows.h>

// dll macros
#ifdef DLLEX_H_EXPORTS
#define DLLEX_H_API __declspec(dllexport)
#else
#define DLLEX_H_API __declspec(dllimport)
#endif

//This is The Library Definations Code ProtoTypes and Abstraction Classes



extern "C" DLLEX_H_API int add(int a, int b);
extern "C" DLLEX_H_API void printId();

class DLLEX_H_API Function {
private:
	Function();

public:
	void print();
	static Function generate();
};



#endif
