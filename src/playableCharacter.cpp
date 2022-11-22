#include <playableCharacter.hpp>

PlayableCharacter::PlayableCharacter(std::string name, unsigned int lvl, unsigned int xp, unsigned int maxHp, unsigned int currentHp,
                                     unsigned int maxMp, unsigned int gold)
    : _name(name), _lvl(lvl), _xp(xp), _maxHp(maxHp), _currentHp(currentHp),
      _maxMp(maxMp), _gold(gold), _weapon(AvailableWeapons.at(WEAPONS::UNARMED)){};
PlayableCharacter::~PlayableCharacter(){};

std::string PlayableCharacter::getName()
{
    return this->_name;
}

unsigned int PlayableCharacter::getCurrentHp()
{
    return this->_currentHp;
}
unsigned int PlayableCharacter::getLvl()
{
    return this->_lvl;
};
unsigned int PlayableCharacter::getXp()
{
    return this->_xp;
};

void PlayableCharacter::setLvl(int lvl)
{
    if (this->_xp == 500)
    {
        this->_lvl += 1;
    };
};
void PlayableCharacter::setXp(int xp)
{
    this->_xp += xp;
};

bool PlayableCharacter::isAlive()
{
    return _currentHp > 0;
}

bool PlayableCharacter::dealDamage(unsigned int damageAmount)
{
    if (_currentHp > damageAmount)
    {
        _currentHp -= damageAmount;
        return true;
    }
    _currentHp = 0;
    return false;
}
void PlayableCharacter::takeDamage(unsigned int damage)
{
    _currentHp -= damage;
}

void PlayableCharacter::heal(unsigned int healAmount)
{
    _currentHp += healAmount;
    if (_currentHp > _maxHp)
    {
        _currentHp = _maxHp;
    }
}

float PlayableCharacter::hPPercentage()
{
    return (float)_currentHp / (float)_maxHp;
}

std::string PlayableCharacter::currentHealth()
{
    return std::to_string(_currentHp) + " / " + std::to_string(_maxHp);
}

Weapon PlayableCharacter::returnWeapon()
{
    return this->_weapon;
}

// Weapon PlayableCharacter::getWeapon()
// {
//     return this->_weapon;
// };

// void PlayableCharacter::set_equipment(Equipment equipment)
// {
//     this->_equipment = equipment;
// }

// void PlayableCharacter::showWeapons()
// {
//     for (auto &i : _inventory)
//     {
//         std::cout << i.getWeaponName() << ' ';
//     }
//     std::cout << std::endl;
// };

// void PlayableCharacter::change_equipment(std::set<Equipment> &equipments)
// {
//     Equipment choosen_equip;
//     this->print_equipments(equipments);
//     std::cout << "Escolha o equipamento";
//     this->set_equipment(choosen_equip);
// };

// void PlayableCharacter::add_equipment(Equipment equipment)
// {
//     this->_equipments.insert(equipment);
// }