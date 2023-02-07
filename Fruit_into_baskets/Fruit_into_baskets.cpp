#include <iostream>
#include "Calculate.h"
Calculate calc;

bool test(std::vector<int> in, int out)
{
	int funcOutput = calc.totalFruit(in);
	if (funcOutput == out)
	{
		std::cout << "Passed!" << std::endl;
		return true;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "Error!" << std::endl;
		std::cout << "Output from func: " << funcOutput << std::endl;
		std::cout << "Output: " << out << std::endl;
		std::cout << std::endl;
	}
	return false;
}

int main()
{
	test({1,2,1}, 3);
	test({0,1,2,2}, 3);
	test({1,2,3,2,2}, 4);
	


}	