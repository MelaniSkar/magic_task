// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	if (N % 6 == 0 || N % 6 == 1)
		std::cout << "second player wins" << std::endl;
	else std::cout << "first player wins" << std::endl;
	system("pause");
    return 0;
}

