// Advanced_Cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void mightGoWrong()
{
	bool error = true;
	if (error) {
		throw 8;
	}

}

int main()
{
	try {
		mightGoWrong();
	}
	catch (exception ex)
	{
		cout << ex.~exception()
	}
	
    return 0;
}

