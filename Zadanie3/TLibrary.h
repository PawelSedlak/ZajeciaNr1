//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TLibrary.h
//  @ Date : 05.03.2018
//  @ Author : 
//
//


#if !defined(_TLIBRARY_H)
#define _TLIBRARY_H


class TLibrary {
public:
	TBook* book;
	string libraryName;
	TLibrary(string libName);
	~TLibrary();
	void printData();
	void setData(string title, string mark);
};

#endif  //_TLIBRARY_H
