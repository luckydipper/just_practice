#include <iostream>
#include <string>
#include "head.h"


int helloworld() {
	int a;
	std::cin >> a;
	return a;
}

int mian()
{	
	helloworld();
	int result = sum(3, 5);
	std::cout << result << std::endl;
	return 0;
}
