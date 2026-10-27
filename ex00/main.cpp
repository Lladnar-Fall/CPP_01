#include "Zombie.hpp"

int	main(void)
{
	std::cout << " -> Create the Zombie Riri." << std::endl;
	Zombie riri = Zombie("Riri");
	riri.announce();

	std::cout << " -> Create the Zombie Fifi with newZombie()." << std::endl;
	Zombie*	fifi = newZombie("Fifi");
	fifi->announce();
	delete fifi;

	std::cout << " -> Create the Zombie Loulou with randomChump()." << std::endl;
	randomChump("Loulou");

	return 0;
}