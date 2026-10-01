#include <iostream>
#include <vector>

void ExampleSlow()
{
	std::vector<int> numbers;

	// push_back adds the value within the parentheses to the back (end) of the vector
	for (int i = 0; i < 3000000; i++)
		numbers.push_back(i);

	// pop_back removes the last value from the vector
	for (int i = 0; i < numbers.size(); i++)
		numbers.pop_back();
}

void ExampleFast()
{
	std::vector<int> numbers;
	numbers.resize(3000000);

	for (int i = 0; i < numbers.size(); i++)
		numbers[i] = i;

	numbers.clear();
}

int main()
{
	// std::vector documentation: https://cplusplus.com/reference/vector/vector/
	// Simple vector add & remove to/from back example
	std::vector<int> test;

	test.push_back(3); // [] --> [3]
	test.push_back(4); // [3] --> [3, 4]
	test.push_back(5); // [3, 4] --> [3, 4, 5]

	test.pop_back(); // [3, 4, 5] --> [3, 4]
	test.pop_back(); // [3, 4] --> [3]
	test.pop_back(); // [3] --> []

	// Note that calling pop_back a 4th time will crash our program cause there's nothing left to remove!!!
	//test.pop_back();

	test.push_back(3);
	test.push_back(4);
	test.push_back(5);

	// We can also use insert & erase to add/remove to/from arbitrary indices
	test.erase(test.begin() + 1);		// [3, 4, 5] --> [3, 5]
	test.insert(test.begin() + 1, 4);	// [3, 5] --> [3, 4, 5]

	// Measure time difference between fast vs slow using breakpoints
	std::cout << "Begin!" << std::endl;
	ExampleFast();
	ExampleSlow();
	std::cout << "End." << std::endl;
	return 0;
}
