// Reverse String Letters 2nd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "Hello Friends";
	int i = 0;
	int j = s.size() -1;

	// swap function
	while (j > i)
	{
		char temp;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		++i;
		--j;
	}
	cout << s << endl;

    return 0;
}

