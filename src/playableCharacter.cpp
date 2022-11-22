#include <playableCharacter.hpp>

PlayableCharacter::PlayableCharacter(std::string name, std::string playerClass,
                                     unsigned int lvl, unsigned int xp, unsigned int maxHp, unsigned int maxMp, unsigned int gold)
    : _name(name), _lvl(lvl), _xp(xp), _maxHp(maxHp), _maxMp(maxMp), _gold(gold){};

PlayableCharacter::PlayableCharacter(PlayableCharacter &playableCharacter)
    : _name(playableCharacter._name), _currentHp(_maxHp){};

PlayableCharacter::~PlayableCharacter(){};

std::string PlayableCharacter::getName() const
{
    return this->_name;
}

float PlayableCharacter::getHp()
{
    return this->_hp;
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

// Weapon PlayableCharacter::getWeapon()
// {
//     return this->_weapon;
// };

// void PlayableCharacter::set_equipment(Equipment equipment)
// {
//     this->_equipment = equipment;
// }

// void PlayableCharacter::print_equipments(std::set<Equipment> &equipments)
// {
//     for (auto &i : this->_equipments)
//     {
//         std::cout << &i << ' ';
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

bool PlayableCharacter::isAlive() const
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
bool PlayableCharacter::takeDamage(unsigned int damage)
{
    if (damage >= _currentHp)
    {
        _currentHp = 0;
        return false;
    }
    _currentHp -= damage;
    return true;
}

void PlayableCharacter::heal(unsigned int healAmount)
{
    _currentHp += healAmount;
    if (_currentHp > _maxHp)
    {
        _currentHp = _maxHp;
    }
}

float PlayableCharacter::hPPercentage() const
{
    return (float)_currentHp / (float)_maxHp;
}

std::string PlayableCharacter::currentHealth() const
{
    return std::to_string(_currentHp) + " / " + std::to_string(_maxHp);
}
void PlayableCharacter::hpMultiplier()
{
    std::string className = this->getClass();
    std::string low = toLower(className);
    if (low == "warrior")
    {
        this->_maxHp *= 2;
    }
}
