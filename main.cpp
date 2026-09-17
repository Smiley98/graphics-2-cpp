#include <iostream>
#include <string>

struct Person
{
	std::string name;
	int age;
};

int main()
{
	Person people[3];
	people[0].name = "David";
	people[1].name = "Michael";
	people[2].name = "Connor";

	people[0].age = 21;
	people[1].age = 31;
	people[2].age = 28;

	for (int i = 0; i < 3; i++)
	{
		std::string name = people[i].name;
		int age = people[i].age;
		std::cout << people[i].name << " is " << people[i].age << " years old" << std::endl;
	}
	return 0;
}
