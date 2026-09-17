#include <iostream>
#include <string>
#include <array>

struct Person
{
	std::string name;
	int age;
};

void CreatePeople1(Person people[], int people_count)
{
	people[0].name = "David";
	people[1].name = "Michael";
	people[2].name = "Connor";

	people[0].age = 21;
	people[1].age = 31;
	people[2].age = 28;
}

void CreatePeople2(std::array<Person, 3>& people)
{
	people[0].name = "David";
	people[1].name = "Michael";
	people[2].name = "Connor";

	people[0].age = 21;
	people[1].age = 31;
	people[2].age = 28;
}

int main()
{
	Person people1[3];
	std::array<Person, 3> people2;
	CreatePeople1(people1, 3);
	CreatePeople2(people2);

	for (int i = 0; i < 3; i++)
	{
		std::cout << people1[i].name << " is " << people1[i].age << " years old" << std::endl;
		std::cout << people2[i].name << " is " << people2[i].age << " years old" << std::endl;
	}
	return 0;
}
