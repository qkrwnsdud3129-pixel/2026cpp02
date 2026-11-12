#pragma once
//#include "DynamicArray.h"

class DynamicArray;   // Àü¹æ ¼±¾ð
class MyException {
public:
	int errorCode;
	const char* errorMessage;
	const DynamicArray* errorAddress;

	MyException(int ec, const char* em, const DynamicArray* ea);		
};