#include <iostream>

#include "factorial.h"

int main ()
{
	int n[] = {1, 4, 7, -3, 0};
	int nLength = sizeof(n) / sizeof(n[0]);

	std::cout << "Basic factorial program for evaluating googletest\n\n" << std::endl;

	for (int i = 0; i < nLength; i++)
	{
		std::cout << "factorial(" << n[i] << ") = " << factorial(n[i]) << std::endl;
	}

	return 0;
}
