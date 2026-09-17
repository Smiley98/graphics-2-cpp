#include <iostream>
#include <string>

bool CheckHealth(int health, int required_health)
{
	bool ready = health >= required_health;
	return ready;
}

void AddByValue(int number)
{
	number += 5;
}

void AddByReference(int& number)
{
	number += 5;
}

struct Warrior
{
	int health;
	std::string name;
};

void SetWarriorHealth(Warrior& warrior, int health)
{
	warrior.health = health;
}

int main()
{
	int a = 10;
	int b = 10;
	AddByValue(a);
	AddByReference(b);

	Warrior warriors[5];
	SetWarriorHealth(warriors[0], 100);
	SetWarriorHealth(warriors[1], 69);
	SetWarriorHealth(warriors[2], 420);
	SetWarriorHealth(warriors[3], 42);
	SetWarriorHealth(warriors[4], -9000);
	warriors[0].name = "David";
	warriors[1].name = "Michael";
	warriors[2].name = "Zach";
	warriors[3].name = "Leija";
	warriors[4].name = "Connor";

	int required_health = 50;
	for (int i = 0; i < 5; i++)
	{
		if (CheckHealth(warriors[i].health, required_health))
		{
			std::cout << warriors[i].name << " is ready for battle!" << std::endl;
		}
		else
		{
			std::cout << warriors[i].name << " must rest..." << std::endl;
		}
	}

	return 0;
}