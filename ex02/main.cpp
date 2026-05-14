#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "=== Creation ===" << std::endl;
    ScavTrap scav("Scav");
    FragTrap frag("Frag");

    std::cout << "\n=== Attaques (20 dmg vs 30 dmg) ===" << std::endl;
    scav.attack("ennemi");   // 20 dégâts, message ScavTrap
    frag.attack("ennemi");   // 30 dégâts, message ClapTrap (pas d'override)

    std::cout << "\n=== Capacites speciales ===" << std::endl;
    scav.guardGate();
    frag.highFiveGuys();

    std::cout << "\n=== Fin (destruction inversee) ===" << std::endl;
    return 0;
}