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
	int numbers[3];
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;

	int x = 1;

	// "x_addr is a pointer to an integer, initialized to the address of x
	int* x_addr = &x;
	std::cout << "Value of x: " << x << std::endl;
	x++; // increment x the way we did in week 1 semester 1

	std::cout << "Value of x: " << *x_addr << std::endl;
	(*x_addr)++; // "fetch the value stored in x_addr, then increment it (effectively same as line 45)

	std::cout << "Value of x: " << x << std::endl;
	std::cout << "Address of x: " << x_addr << std::endl;

	//Person people1[3];
	//std::array<Person, 3> people2;
	//CreatePeople1(people1, 3);
	//CreatePeople2(people2);
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	std::cout << people1[i].name << " is " << people1[i].age << " years old" << std::endl;
	//	std::cout << people2[i].name << " is " << people2[i].age << " years old" << std::endl;
	//}
	return 0;
}
