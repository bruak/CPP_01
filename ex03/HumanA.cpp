#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) { this->name = name; }

HumanA::~HumanA() {}

void HumanA::attack() { std::cout << name << " attacks with their " << weapon.getType() << std::endl; }
