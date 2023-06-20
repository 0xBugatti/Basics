#pragma once
#ifdef MOMO_EXPORTS
#define MOMO_API __declspec(dllexport)
#else
#define MOMO_API __declspec(dllimport)
#endif

//ProtoType Your Functions 
//Function Declaration

extern "C" MOMO_API void Messageme();

extern "C" MOMO_API void Hackme(int n);


