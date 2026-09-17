#include <iostream>

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

	int required_health = 50;
	for (int i = 0; i < 5; i++)
	{
		if (CheckHealth(warriors[i].health, required_health))
		{
			std::cout << "Ready for battle!" << std::endl;
		}
		else
		{
			std::cout << "You must rest..." << std::endl;
		}
	}

	return 0;
}