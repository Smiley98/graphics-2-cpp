#include <iostream>

bool CheckHealth(int health, int required_health)
{
	bool ready = health >= required_health;
	return ready;
}

int main()
{
	int warrior_healths[5];
	warrior_healths[0] = 100;
	warrior_healths[1] = 69;
	warrior_healths[2] = 420;
	warrior_healths[3] = 42;
	warrior_healths[4] = -9000;

	int required_health = 50;
	for (int i = 0; i < 5; i++)
	{
		if (CheckHealth(warrior_healths[i], required_health))
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
