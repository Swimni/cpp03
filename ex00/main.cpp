#include "ClapTrap.hpp"

int main() {
    ClapTrap tic("tic");
    ClapTrap tac("tac");

    tic.attack("tac");
    tac.takeDamage(3);
    tac.beRepaired(2);

    return 0;
}

