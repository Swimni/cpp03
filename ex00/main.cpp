#include "ClapTrap.hpp"

int main()
{
	ClapTrap bot("bot");

	for (int i = 0; i < 10; i++)
		bot.attack("enemy");

	bot.takeDamage(50);

	bot.attack("enemy");
	bot.beRepaired(5);
}
