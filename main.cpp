#include <iostream>
#include <cstdlib>
#include "UtlStr.h"

//int main()
//{
//	std::string upper = "TEST";
//	std::string lower = UtlStr::toLower(upper);
//	std::cout << lower << std::endl;
//	std::cout << "Hello World!" << std::endl;
//}

int main()
{
	int *a = (int*) malloc(sizeof(int));
	int *b = (int*) malloc(sizeof(int));
	int *c = (int*) malloc(sizeof(int));
	*a = 6;
	*b = 2;
	*c = *a / *b;
	printf("%d\n",*c);
	return 0;
}

