#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "=== Creation des robots ===" << std::endl;
    ClapTrap clap("Clappy");
    ScavTrap scav1("Alice");
    ScavTrap scav2("Bob");

    std::cout << "\n=== Combat : Alice attaque Bob ===" << std::endl;
    scav1.attack("Bob");
    scav2.takeDamage(20);   // Bob encaisse les degats d'Alice

    std::cout << "\n=== Bob riposte ===" << std::endl;
    scav2.attack("Alice");
    scav1.takeDamage(20);

    std::cout << "\n=== Alice se repare ===" << std::endl;
    scav1.beRepaired(15);

    std::cout << "\n=== ClapTrap vs ScavTrap : messages differents ? ===" << std::endl;
    clap.attack("Alice");   // message ClapTrap
    scav1.attack("Clappy"); // message ScavTrap

    std::cout << "\n=== Capacite speciale ===" << std::endl;
    scav1.guardGate();

    std::cout << "\n=== Bob prend un coup fatal ===" << std::endl;
    scav2.takeDamage(200);   // largement plus que ses HP
    scav2.attack("Alice");   // doit refuser : mort
    scav2.beRepaired(50);    // doit refuser : mort

    std::cout << "\n=== Fin du main (destruction en ordre inverse) ===" << std::endl;
    return 0;
}