#include "Zombie.hpp"

int main(void)
{
    int count = 5;

    std::cout << "Creating a horde of " << count << " zombies..." << std::endl;
    Zombie* horde = zombieHorde(count, "Peter");

    if (horde != NULL)
    {
        for (int i = 0; i < count; i++)
        {
            std::cout << "[" << i << "] ";
            horde[i].announce();
        }
        delete[] horde;
    }
    return (0);
}